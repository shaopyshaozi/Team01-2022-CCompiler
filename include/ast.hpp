#ifndef ast_hpp
#define ast_hpp

#include <string>
#include <iostream>
#include <memory>
#include <initializer_list>
#include <vector>
#include <map>

#include "ast_header/ast_Base.hpp"
#include "ast_header/ast_FunctionDefinition.hpp"
#include "ast_header/ast_Identifier.hpp"
#include "ast_header/ast_Integer.hpp"
#include "ast_header/ast_Float.hpp"
#include "ast_header/ast_Type.hpp"
#include "ast_header/ast_Sizeof.hpp"

#include "ast_header/Operator/ast_BinaryAddition.hpp"
#include "ast_header/Operator/ast_BinaryAND.hpp"
#include "ast_header/Operator/ast_BinaryDivision.hpp"
#include "ast_header/Operator/ast_BinaryLeftShift.hpp"
#include "ast_header/Operator/ast_BinaryModulus.hpp"
#include "ast_header/Operator/ast_BinaryMultiplication.hpp"
#include "ast_header/Operator/ast_BinaryOR.hpp"
#include "ast_header/Operator/ast_BinaryRightShift.hpp"
#include "ast_header/Operator/ast_BinarySubtraction.hpp"
#include "ast_header/Operator/ast_BinaryAssign.hpp"
#include "ast_header/Operator/ast_BinaryXOR.hpp"
#include "ast_header/Operator/ast_BinaryEqual.hpp"
#include "ast_header/Operator/ast_BinaryNotEqual.hpp"
#include "ast_header/Operator/ast_BinaryLessThan.hpp"
#include "ast_header/Operator/ast_BinaryGreaterThan.hpp"
#include "ast_header/Operator/ast_BinaryLessThanEqual.hpp"
#include "ast_header/Operator/ast_BinaryGreaterThanEqual.hpp"
#include "ast_header/Operator/ast_BinaryLogicAND.hpp"
#include "ast_header/Operator/ast_BinaryLogicOR.hpp"

#include "ast_header/Unary_Operator/ast_UnaryInc.hpp"
#include "ast_header/Unary_Operator/ast_UnaryDec.hpp"
#include "ast_header/Unary_Operator/ast_UnarySub.hpp"
#include "ast_header/Unary_Operator/ast_UnaryAddress.hpp"
#include "ast_header/Unary_Operator/ast_UnaryPointer.hpp"


#include "ast_header/ast_FunctionDeclaratorPara.hpp"
#include "ast_header/ast_ParameterDeclaration.hpp"
#include "ast_header/ast_ParameterList.hpp"
#include "ast_header/ast_FunctionName.hpp"
#include "ast_header/ast_InitDeclarator.hpp"
#include "ast_header/ast_TranslationUnit.hpp"
#include "ast_header/ast_DeclarationList.hpp"
#include "ast_header/ast_PointerDeclarator.hpp"

#include "ast_header/ast_CompoundStatement.hpp"
#include "ast_header/ast_Declaration.hpp"
#include "ast_header/ast_StatementList.hpp"
#include "ast_header/ast_Empty.hpp"

#include "ast_header/Loop_and_condition/ast_For.hpp"
#include "ast_header/Loop_and_condition/ast_If.hpp"
#include "ast_header/Loop_and_condition/ast_IfElse.hpp"
#include "ast_header/Loop_and_condition/ast_While.hpp"

#include "ast_header/Function/ast_ArgumentExprList.hpp"
#include "ast_header/Function/ast_ArgumentExprListOne.hpp"
#include "ast_header/Function/ast_FunctionCall.hpp"
#include "ast_header/Function/ast_FunctionCallNoPara.hpp"

#include "ast_header/Keywords/ast_Break.hpp"
#include "ast_header/Keywords/ast_Continue.hpp"
#include "ast_header/Keywords/ast_Return.hpp"
#include "ast_header/Keywords/ast_ReturnExpr.hpp"

#include "ast_header/context.hpp"



//#include "ast/ast_return.hpp"



extern Base *parseAST(std::string filename);

#endif
