#include "ast_header/Unary_Operator/ast_UnaryDec.hpp" // change name

// Constructor implementation
UnaryDec::UnaryDec(BasePtr identifier) // change name
{
  branches.insert(branches.end(), identifier);
}

// Destructor implementation
UnaryDec::~UnaryDec()  // change name
{
  delete branches[0];
}

void UnaryDec::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "Dec [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void UnaryDec::generateCode(std::ostream& stream, Context &context, int destReg) const{
  //stream << functionName << ":" << std::endl;
  //stream << "li a5,";
  std::string name = branches[0]->getName();
  branches[0]->generateCode(stream,context,destReg);
  stream << "addi " << context.int_to_register(destReg) << "," << context.int_to_register(destReg) << ", -1" << std::endl;
  int variable_allocation = context.getVariableLocation(name);
  stream << "sw " << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
}

int UnaryDec::getSize() const{
    return branches[0]->getSize();
}
