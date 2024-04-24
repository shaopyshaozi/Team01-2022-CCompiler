#include "ast_header/Function/ast_ArgumentExprList.hpp"

// Constructor implementation
ArgumentExprList::ArgumentExprList(BasePtr argument_expression_list, BasePtr assignment_expression) // need to change here
{
  branches.insert(branches.end(), argument_expression_list);
  branches.insert(branches.end(), assignment_expression);

}

// Destructor implementation
ArgumentExprList::~ArgumentExprList()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void ArgumentExprList::Print(std::ostream &stream, std::string indent) const{
    stream << indent << "(" << std::endl;
    branches[0]->Print(stream, indent);// passing through
    branches[1]->Print(stream, indent);
    stream << indent << ")" << std::endl;
}

void ArgumentExprList::generateCode(std::ostream& stream, Context &context, int destReg) const{
    //std::string name2 = branches[1]->getName();
    //int paraReg2 = context.getParameterRegAllocation(name2);
    branches[0]->generateCode(stream, context ,destReg); // passing through
    branches[1]->generateCode(stream, context ,getParaRegLocation());
}

int ArgumentExprList::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}

int ArgumentExprList::getParaRegLocation() const{
    return branches[0]->getParaRegLocation() + 1;
}

