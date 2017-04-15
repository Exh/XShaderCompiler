/*
 * GLSLConverter.h
 * 
 * This file is part of the XShaderCompiler project (Copyright (c) 2014-2017 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#ifndef XSC_GLSL_CONVERTER_H
#define XSC_GLSL_CONVERTER_H


#include "Converter.h"
#include "ExprConverter.h"
#include <functional>
#include <set>


namespace Xsc
{


/*
GLSL AST converter.
This class modifies the AST after context analysis to be conform with GLSL,
e.g. remove arguments from intrinsic calls, that are not allowed in GLSL, such as sampler state objects.
*/
class GLSLConverter : public Converter
{
    
    private:
        
        void ConvertASTPrimary(
            Program& program,
            const ShaderInput& inputDesc,
            const ShaderOutput& outputDesc
        ) override;

        /* ----- Visitor implementation ----- */

        DECL_VISIT_PROC( Program           );
        DECL_VISIT_PROC( CodeBlock         );
        DECL_VISIT_PROC( SwitchCase        );

        DECL_VISIT_PROC( VarDecl           );
        DECL_VISIT_PROC( BufferDecl        );
        DECL_VISIT_PROC( SamplerDecl       );
        DECL_VISIT_PROC( StructDecl        );

        DECL_VISIT_PROC( FunctionDecl      );
        DECL_VISIT_PROC( UniformBufferDecl );
        DECL_VISIT_PROC( VarDeclStmnt      );
        DECL_VISIT_PROC( AliasDeclStmnt    );

        DECL_VISIT_PROC( CodeBlockStmnt    );
        DECL_VISIT_PROC( ForLoopStmnt      );
        DECL_VISIT_PROC( WhileLoopStmnt    );
        DECL_VISIT_PROC( DoWhileLoopStmnt  );
        DECL_VISIT_PROC( IfStmnt           );
        DECL_VISIT_PROC( ElseStmnt         );
        DECL_VISIT_PROC( SwitchStmnt       );
        DECL_VISIT_PROC( ReturnStmnt       );

        DECL_VISIT_PROC( LiteralExpr       );
        DECL_VISIT_PROC( CastExpr          );
        DECL_VISIT_PROC( CallExpr          );
        DECL_VISIT_PROC( ObjectExpr        );

        /* ----- Scope functions ----- */

        // Renames the identifier of the specified declaration object (if required) and registers its identifier.
        void RegisterDeclIdent(Decl* obj, bool global = false);

        // Registers the identifiers of all specified variables (see RegisterDeclIdent).
        void RegisterGlobalDeclIdents(const std::vector<VarDecl*>& varDecls);

        /* ----- Helper functions for conversion ----- */

        // Returns true if the specified variable declaration must be renamed.
        bool MustRenameDeclIdent(const Decl* obj) const;

        // Removes all variable declarations which have a sampler state type.
        void RemoveSamplerStateVarDeclStmnts(std::vector<VarDeclStmntPtr>& stmnts);

        // Renames the specified identifier if it equals a reserved GLSL intrinsic or function name.
        bool RenameReservedKeyword(Identifier& ident);

        // Function signature compare callback for the function name converter.
        static bool CompareFuncSignatures(const FunctionDecl& lhs, const FunctionDecl& rhs);

        static bool ConvertVarDeclType(VarDecl& varDecl);
        static bool ConvertVarDeclBaseTypeDenoter(VarDecl& varDecl, const DataType dataType);

        /* ----- Function declaration ----- */

        void ConvertFunctionDecl(FunctionDecl* ast);
        void ConvertFunctionDeclDefault(FunctionDecl* ast);
        void ConvertFunctionDeclEntryPoint(FunctionDecl* ast);

        /* ----- Call expressions ----- */

        void ConvertIntrinsicCall(CallExpr* ast);
        void ConvertIntrinsicCallSaturate(CallExpr* ast);
        void ConvertIntrinsicCallTexLod(CallExpr* ast);
        void ConvertIntrinsicCallTextureSample(CallExpr* ast);
        void ConvertIntrinsicCallTextureSampleLevel(CallExpr* ast);
        void ConvertIntrinsicCallImageAtomic(CallExpr* ast);

        void ConvertFunctionCall(CallExpr* ast);

        /* ----- Entry point ----- */

        void ConvertEntryPointStructPrefix(ExprPtr& expr, ObjectExpr* objectExpr);
        void ConvertEntryPointStructPrefixObject(ExprPtr& expr, ObjectExpr* prefixExpr, ObjectExpr* objectExpr);
        void ConvertEntryPointStructPrefixArray(ExprPtr& expr, ArrayExpr* prefixExpr, ObjectExpr* objectExpr);

        void ConvertEntryPointReturnStmnt(ReturnStmnt& ast, StructDecl* structDecl, const TypeDenoterPtr& typeDen, const ExprPtr& typeConstructor);
        void ConvertEntryPointReturnStmntSequenceExpr(ReturnStmnt& ast, StructDecl* structDecl, const TypeDenoterPtr& typeDen, const SequenceExpr& typeConstructor);
        void ConvertEntryPointReturnStmntCommonExpr(ReturnStmnt& ast, StructDecl* structDecl, const TypeDenoterPtr& typeDen, const ExprPtr& typeConstructor);

        void ConvertEntryPointReturnStmntToCodeBlock(StmntPtr& stmnt);

        /* ----- Object expressions ----- */

        void ConvertObjectExpr(ObjectExpr* objectExpr);
        void ConvertObjectExprStaticVar(ObjectExpr* objectExpr);
        void ConvertObjectExprDefault(ObjectExpr* objectExpr);
        void ConvertObjectPrefixStructMember(ExprPtr& prefixExpr, const StructDecl* ownerStructDecl, const StructDecl* activeStructDecl);
        void ConvertObjectPrefixSelfParam(ExprPtr& prefixExpr, ObjectExpr* objectExpr);
        void ConvertObjectPrefixBaseStruct(ExprPtr& prefixExpr, ObjectExpr* objectExpr);
        void ConvertObjectPrefixNamespace(ExprPtr& prefixExpr, ObjectExpr* objectExpr);
        void ConvertObjectPrefixNamespaceStruct(ObjectExpr* prefixObjectExpr, ObjectExpr* objectExpr, const StructDecl* baseStructDecl, const StructDecl* activeStructDecl);

        /* ----- Unrolling ----- */

        void UnrollStmnts(std::vector<StmntPtr>& stmnts);
        void UnrollStmntsVarDecl(std::vector<StmntPtr>& unrolledStmnts, VarDeclStmnt* ast);
        void UnrollStmntsVarDeclInitializer(std::vector<StmntPtr>& unrolledStmnts, VarDecl* varDecl);

        /* === Members === */

        ExprConverter               exprConverter_;

        ShaderTarget                shaderTarget_       = ShaderTarget::VertexShader;

        Options                     options_;
        bool                        isVKSL_             = false;
        bool                        autoBindings_       = false;
        int                         autoBindingSlot_    = 0;

        /*
        List of all variables with reserved identifiers that come from a structure that must be resolved.
        If a local variable uses a name from this list, it name must be modified with name mangling.
        */
        std::vector<const Decl*>    globalReservedDecls_;

};


} // /namespace Xsc


#endif



// ================================================================================