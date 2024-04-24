#include "ast_header/ast_ParameterList.hpp"

// Constructor implementation
ParameterList::ParameterList(BasePtr parameter_list, BasePtr parameter_declaration) // need to change here
{
  branches.insert(branches.end(), parameter_list);
  branches.insert(branches.end(), parameter_declaration);

}

// Destructor implementation
ParameterList::~ParameterList()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void ParameterList::Print(std::ostream &stream, std::string indent) const{
    branches[0]->Print(stream, indent);// passing through
    branches[1]->Print(stream, indent);
}

void ParameterList::generateCode(std::ostream& stream, Context &context, int destReg) const{
    branches[0]->generateCode(stream, context ,destReg); // passing through
    branches[1]->generateCode(stream, context ,destReg);
}

int ParameterList::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
