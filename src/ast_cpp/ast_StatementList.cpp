#include "ast_header/ast_StatementList.hpp"

// Constructor implementation
StatementList::StatementList(BasePtr statement_list, BasePtr statement) // need to change here
{
  branches.insert(branches.end(), statement_list);
  branches.insert(branches.end(), statement);

}

// Destructor implementation
StatementList::~StatementList()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void StatementList::Print(std::ostream &stream, std::string indent) const{
    branches[0]->Print(stream, indent);// passing through
    branches[1]->Print(stream, indent);
}

void StatementList::generateCode(std::ostream& stream, Context &context, int destReg) const{
    branches[0]->generateCode(stream, context ,destReg); // passing through
    branches[1]->generateCode(stream, context ,destReg);
}

int StatementList::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
