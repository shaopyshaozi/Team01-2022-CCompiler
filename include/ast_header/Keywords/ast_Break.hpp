#ifndef ast_Break_hpp
#define ast_Break_hpp

#include "ast_header/ast_Base.hpp"

class Break
  : public Base
{
public:
  // constructor inherient from Base()

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

};

#endif
