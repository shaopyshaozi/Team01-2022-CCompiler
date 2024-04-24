#ifndef ast_UnaryInc_hpp // change here
#define ast_UnaryInc_hpp // change here

#include "ast_header/ast_Base.hpp"


class UnaryInc  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  UnaryInc(BasePtr Identifier); // rename

  // Destructor initialized
  virtual ~UnaryInc(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

  int getSize() const override;

};

#endif

