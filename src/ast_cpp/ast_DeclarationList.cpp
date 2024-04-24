#include "ast_header/ast_DeclarationList.hpp"

// Constructor implementation
DeclarationList::DeclarationList(BasePtr declaration_list, BasePtr declaration) // need to change here
{
  branches.insert(branches.end(), declaration_list);
  branches.insert(branches.end(), declaration);

}

// Destructor implementation
DeclarationList::~DeclarationList()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void DeclarationList::Print(std::ostream &stream, std::string indent) const{
    branches[0]->Print(stream, indent);// passing through
    branches[1]->Print(stream, indent);
}

void DeclarationList::generateCode(std::ostream& stream, Context &context, int destReg) const{
    branches[0]->generateCode(stream, context ,destReg); // passing through
    branches[1]->generateCode(stream, context ,destReg);
}

int DeclarationList::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
