#include "ast_header/ast_PointerDeclarator.hpp" // change name

// Constructor implementation
PointerDeclarator::PointerDeclarator(BasePtr identifier) // change name
{
  branches.insert(branches.end(), identifier);
}

// Destructor implementation
PointerDeclarator::~PointerDeclarator()  // change name
{
  delete branches[0];
}

void PointerDeclarator::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "Pointer Declarator [" << std::endl;
  stream << indent << "Identifier: " << std::endl;
  branches[0]->Print(stream, indent+"  ");
  stream << indent << "]" << std::endl;
}

void PointerDeclarator::generateCode(std::ostream& stream, Context &context, int destReg) const{
    std::string name = branches[0]->getName();
    context.is_pointer.push_back(name);
}

int PointerDeclarator::getSize() const{
    return branches[0]->getSize();
}

std::string PointerDeclarator::getName() const
{
  return branches[0]->getName();
}

int PointerDeclarator::getSizeof() const{
    return branches[0]->getSizeof();
}

int PointerDeclarator::isAssigning() const {
    return branches[0]->isAssigning();
}
