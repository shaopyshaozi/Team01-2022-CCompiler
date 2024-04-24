#include "ast_header/Unary_Operator/ast_UnaryInc.hpp" // change name

// Constructor implementation
UnaryInc::UnaryInc(BasePtr identifier) // change name
{
  branches.insert(branches.end(), identifier);
}

// Destructor implementation
UnaryInc::~UnaryInc()  // change name
{
  delete branches[0];
}

void UnaryInc::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "Inc [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void UnaryInc::generateCode(std::ostream& stream, Context &context, int destReg) const{
  //stream << functionName << ":" << std::endl;
  //stream << "li a5,";
  std::string name = branches[0]->getName();
  branches[0]->generateCode(stream, context,destReg);
  stream << "addi " << context.int_to_register(destReg) << "," << context.int_to_register(destReg) << ", 1" << std::endl;
  int variable_allocation = context.getVariableLocation(name);
  stream << "sw " << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
}

int UnaryInc::getSize() const{
    return branches[0]->getSize();
}
