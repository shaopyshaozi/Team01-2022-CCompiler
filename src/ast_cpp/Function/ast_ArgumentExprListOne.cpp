#include "ast_header/Function/ast_ArgumentExprListOne.hpp"

// Constructor implementation
ArgumentExprListOne::ArgumentExprListOne(BasePtr argument_expression_list) // need to change here
{
  branches.insert(branches.end(), argument_expression_list);
}

// Destructor implementation
ArgumentExprListOne::~ArgumentExprListOne()   // need to change here, might not be two branches
{
  delete branches[0];
}

void ArgumentExprListOne::Print(std::ostream &stream, std::string indent) const{
    stream << indent << "(" << std::endl;
    branches[0]->Print(stream, indent);// passing through
    stream << indent << ")" << std::endl;
}

void ArgumentExprListOne::generateCode(std::ostream& stream, Context &context, int destReg) const{
    std::string name1 = branches[0]->getName();
    int paraReg1 = context.getParameterRegAllocation(name1);
    branches[0]->generateCode(stream, context ,10); // passing through
}

int ArgumentExprListOne::getSize() const{
    return branches[0]->getSize();
}

int ArgumentExprListOne::getParaRegLocation() const{
    return 10;
}
