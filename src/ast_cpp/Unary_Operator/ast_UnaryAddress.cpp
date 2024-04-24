#include "ast_header/Unary_Operator/ast_UnaryAddress.hpp" // change name

// Constructor implementation
UnaryAddress::UnaryAddress(BasePtr identifier) // change name
{
  branches.insert(branches.end(), identifier);
}

// Destructor implementation
UnaryAddress::~UnaryAddress()  // change name
{
  delete branches[0];
}

void UnaryAddress::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "Address [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void UnaryAddress::generateCode(std::ostream& stream, Context &context, int destReg) const{
  std::string name = branches[0]->getName();
  int variable_allocation = context.getVariableLocation(name);
  stream << "addi " << context.int_to_register(destReg) << ",s0," << variable_allocation << std::endl;
}

int UnaryAddress::getSize() const{
    return branches[0]->getSize();
}
