#include "ast_header/ast_CompoundStatement.hpp"

// Constructor implementation
CompoundStatement::CompoundStatement(BasePtr direct_declarator, BasePtr parameter_type_list) // need to change here
{
  branches.insert(branches.end(), direct_declarator);
  branches.insert(branches.end(), parameter_type_list);

}

// Destructor implementation
CompoundStatement::~CompoundStatement()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void CompoundStatement::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "Compound Statement [" << std::endl;
  branches[0]->Print(stream, indent+"   ");
  branches[1]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}



void CompoundStatement::generateCode(std::ostream& stream, Context &context, int destReg) const{
    context.initMap();
    branches[0]->generateCode(stream, context ,destReg); // passing through
    branches[1]->generateCode(stream, context ,destReg);
    context.deleteMap();
}

int CompoundStatement::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
