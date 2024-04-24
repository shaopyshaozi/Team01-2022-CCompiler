#ifndef ast_UnarySub_hpp // change here
#define ast_UnarySub_hpp // change here

#include "ast_header/ast_Base.hpp"


class UnarySub  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  UnarySub(BasePtr Identifier); // rename

  // Destructor initialized
  virtual ~UnarySub(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  std::string getName() const override;

  int getSize() const override;

};

#endif

