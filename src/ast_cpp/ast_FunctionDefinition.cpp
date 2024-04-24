#include "ast_header/ast_FunctionDefinition.hpp"

// Constructor implementation
FunctionDefinition::FunctionDefinition(BasePtr declarationspec, BasePtr declarator, BasePtr compound_stat) // need to change here
{
  branches.insert(branches.end(), declarationspec);
  branches.insert(branches.end(), declarator);
  branches.insert(branches.end(), compound_stat);
}

// Destructor implementation
FunctionDefinition::~FunctionDefinition()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
  delete branches[2];
}

void FunctionDefinition::Print(std::ostream &stream, std::string indent) const{
  stream << "" << std::endl;
  stream << indent << "Function Definition [" << std::endl;
  branches[0]->Print(stream, indent+"   ");
  branches[1]->Print(stream, indent+"   ");
  branches[2]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void FunctionDefinition::generateCode(std::ostream& stream, Context &context, int destReg) const{
  std::string functionLabel = context.makeLabel("FUNCTION");
  std::string endLabel = context.makeLabel("FUNCTIONEND");
  context.PushFunction(functionLabel, endLabel);

  std::string Type = branches[0]->getType();
  context.return_type.push(Type);

  std::string functionName = branches[1]->getName();
  stream << ".globl " << functionName << std::endl;
  stream << functionName << ":" << std::endl;

  int stacksize = context.round(getSize());

  stream << "addi sp,sp,-" << stacksize << std::endl;
  stream << "sw ra,"<< stacksize - 4 <<"(sp)" << std::endl;
  stream << "sw s0,"<< stacksize - 8 <<"(sp)" << std::endl;
  stream << "addi s0,sp," << stacksize << std::endl;

  //int temp = 15; // hardcoded destReg to always be a5???

  int temp = context.allocateRegister(); // not sure

  branches[1]->generateCode(stream, context, temp);
  branches[2]->generateCode(stream, context, temp);

  stream << endLabel << ":" << std::endl;

  if (Type == "double"){
    stream << "fmv.d fa0, f" << context.int_to_register(temp) << std::endl;
  }
  else if (Type == "float"){
    stream << "fmv.s fa0, f" << context.int_to_register(temp) << std::endl;
  }
  else {
    stream << "mv a0, " << context.int_to_register(temp) << std::endl;
  }
  stream << "lw s0,"<< stacksize - 8 << "(sp)" << std::endl;
  stream << "lw ra,"<< stacksize - 4 << "(sp)" << std::endl;
  stream << "addi sp,sp," << stacksize << std::endl;
  stream << "jr ra" << std::endl;
}

int FunctionDefinition::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize() + branches[2]->getSize();
}
