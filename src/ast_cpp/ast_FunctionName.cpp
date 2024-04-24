#include "ast_header/ast_FunctionName.hpp"

// Constructor implementation
FunctionName::FunctionName(std::string _identifier)
  : name(_identifier)
{}

// Destructor， seems nothing to implement here

FunctionName::~FunctionName()
{}

// Visualising
void FunctionName::Print(std::ostream &stream, std::string indent) const
{
    stream << indent << "Identifier : " << name << std::endl;
}

void FunctionName::generateCode(std::ostream& stream, Context &context, int destReg) const
{}

std::string FunctionName::getName() const
{
  return name;
}

int FunctionName::getSize() const{return 0;}
