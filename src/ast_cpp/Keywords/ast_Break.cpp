#include "ast_header/Keywords/ast_Break.hpp"

void Break::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "BREAK" << std::endl;
}

void Break::generateCode(std::ostream& stream, Context &context, int destReg) const{
  std::string endLabel = context.GetEndLabel();
  stream << "j " << endLabel << std::endl;
}
