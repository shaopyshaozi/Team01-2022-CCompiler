#ifndef ast_PointerDeclarator_hpp // change here
#define ast_PointerDeclarator_hpp // change here

#include "ast_header/ast_Base.hpp"


class PointerDeclarator  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  PointerDeclarator(BasePtr Identifier); // rename

  // Destructor initialized
  virtual ~PointerDeclarator(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  std::string getName() const override;

  int getSize() const override;
  int getSizeof() const override;
  int isAssigning() const override;

};

#endif

