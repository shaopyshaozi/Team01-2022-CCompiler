#include "ast_header/Unary_Operator/ast_UnarySub.hpp" // change name

// Constructor implementation
UnarySub::UnarySub(BasePtr identifier) // change name
{
  branches.insert(branches.end(), identifier);
}

// Destructor implementation
UnarySub::~UnarySub()  // change name
{
  delete branches[0];
}

void UnarySub::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "UnarySub [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void UnarySub::generateCode(std::ostream& stream, Context &context, int destReg) const{
  //stream << functionName << ":" << std::endl;
  //stream << "li a5,";
  branches[0]->generateCode(stream, context,destReg);
  stream << "neg " << context.int_to_register(destReg) << "," << context.int_to_register(destReg) << std::endl;
}

int UnarySub::getSize() const{
    return branches[0]->getSize();
}

std::string UnarySub::getName() const
{
  return branches[0]->getName();
}
