#ifndef ast_ReturnExpr_hpp // change here
#define ast_ReturnExpr_hpp // change here

#include "ast_header/ast_Base.hpp"


class ReturnExpr  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  ReturnExpr(BasePtr expression); // rename

  // Destructor initialized
  virtual ~ReturnExpr(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

  int getSize() const override;

};

#endif

