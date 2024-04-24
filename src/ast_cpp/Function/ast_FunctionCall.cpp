#include "ast_header/Function/ast_FunctionCall.hpp"

// Constructor implementation
FunctionCall::FunctionCall(BasePtr postfix_expression, BasePtr argument_expression_list) // need to change here
{
  branches.insert(branches.end(), postfix_expression);
  branches.insert(branches.end(), argument_expression_list);

}

// Destructor implementation
FunctionCall::~FunctionCall()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void FunctionCall::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "FunctionCall [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  branches[1]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}



void FunctionCall::generateCode(std::ostream& stream, Context &context, int destReg) const{
        std::string FunctionName = branches[0]->getName();
        //branches[0]->generateCode(stream, context ,destReg); // passing through
        branches[1]->generateCode(stream, context ,destReg);
        stream << "call " << FunctionName << std::endl;
        stream << "mv " << context.int_to_register(destReg) << ", a0" << std::endl;
}

int FunctionCall::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
