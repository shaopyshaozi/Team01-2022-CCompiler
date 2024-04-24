#include "ast_header/Keywords/ast_Continue.hpp"

void Continue::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "CONTINUE" << std::endl;
}

void Continue::generateCode(std::ostream& stream, Context &context, int destReg) const{
  std::string StartLabel = context.GetStartLabel();
  stream << "j " << StartLabel << std::endl;
}
