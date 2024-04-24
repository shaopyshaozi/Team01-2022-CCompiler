#include "ast_header/Keywords/ast_Return.hpp"

void Return::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "RETURN" << std::endl;
}

void Return::generateCode(std::ostream& stream, Context &context, int destReg) const{
    const std::string& functionLabel = context.GetCurrentFunctionLabel();
    stream << "j " << functionLabel << std::endl;
}
