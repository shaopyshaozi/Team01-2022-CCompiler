#include "ast_header/Function/ast_FunctionCallNoPara.hpp"

// Constructor implementation
FunctionCallNoPara::FunctionCallNoPara(BasePtr postfix_expression) // need to change here
{
  branches.insert(branches.end(), postfix_expression);
}

// Destructor implementation
FunctionCallNoPara::~FunctionCallNoPara()   // need to change here, might not be two branches
{
  delete branches[0];
}

void FunctionCallNoPara::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "FunctionCall [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}



void FunctionCallNoPara::generateCode(std::ostream& stream, Context &context, int destReg) const{
        std::string FunctionName = branches[0]->getName();
        stream << "call " << FunctionName << std::endl;
        stream << "mv " << context.int_to_register(destReg) << ", a0" << std::endl;
}

int FunctionCallNoPara::getSize() const{
    return branches[0]->getSize();
}
