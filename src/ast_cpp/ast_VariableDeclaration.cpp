#include "ast_header/ast_VariableDeclaration.hpp"

// Constructor implementation
VariableDeclaration::VariableDeclaration(BasePtr declarator, BasePtr initializer) // need to change here
{
  branches.insert(branches.end(), declarator);
  branches.insert(branches.end(), initializer);

}

// Destructor implementation
VariableDeclaration::~VariableDeclaration()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void VariableDeclaration::Print(std::ostream &stream, std::string indent) const{
    stream << indent << "Variable Declaration["<< std::endl;
    branches[0]->Print(stream, indent + "   ");// passing through
    branches[1]->Print(stream, indent + "   ");
    stream << indent << "]"<< std::endl;

}

void VariableDeclaration::generateCode(std::ostream& stream, Context &context, int destReg) const{
    // int x = 2;

    //std::string name = branches[0]->getName();
    //int variable_addr = context.variableAllocation(name);

    // not implemented


    branches[0]->generateCode(stream, context ,destReg); // passing through
    branches[1]->generateCode(stream, context ,destReg);
}

int VariableDeclaration::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
