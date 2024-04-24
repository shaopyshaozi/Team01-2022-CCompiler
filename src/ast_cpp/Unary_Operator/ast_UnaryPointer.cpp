#include "ast_header/Unary_Operator/ast_UnaryPointer.hpp" // change name

// Constructor implementation
UnaryPointer::UnaryPointer(BasePtr identifier) // change name
{
  branches.insert(branches.end(), identifier);
}

// Destructor implementation
UnaryPointer::~UnaryPointer()  // change name
{
  delete branches[0];
}

void UnaryPointer::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "Pointer [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void UnaryPointer::generateCode(std::ostream& stream, Context &context, int destReg) const{
  std::string name = branches[0]->getName();
  branches[0]->generateCode(stream, context, destReg);
  int variable_allocation = context.getVariableLocation(name);
  stream << "sw " << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
}

int UnaryPointer::getSize() const{
    return branches[0]->getSize();
}

std::string UnaryPointer::getName() const
{
  return branches[0]->getName();
}

int UnaryPointer::isPtr() const{
    return 1;
}
