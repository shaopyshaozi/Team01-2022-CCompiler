#include "ast_header/ast_TranslationUnit.hpp"

// Constructor implementation
TranslationUnit::TranslationUnit(BasePtr translation_unit, BasePtr external_declaration) // need to change here
{
  branches.insert(branches.end(), translation_unit);
  branches.insert(branches.end(), external_declaration);

}

// Destructor implementation
TranslationUnit::~TranslationUnit()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void TranslationUnit::Print(std::ostream &stream, std::string indent) const{
    branches[0]->Print(stream, indent);// passing through
    branches[1]->Print(stream, indent);
}

void TranslationUnit::generateCode(std::ostream& stream, Context &context, int destReg) const{
    branches[0]->generateCode(stream, context ,destReg); // passing through
    branches[1]->generateCode(stream, context ,destReg);
}

int TranslationUnit::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
