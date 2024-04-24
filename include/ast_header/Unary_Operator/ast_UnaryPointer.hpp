#ifndef ast_UnaryPointer_hpp // change here
#define ast_UnaryPointer_hpp // change here

#include "ast_header/ast_Base.hpp"


class UnaryPointer  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  UnaryPointer(BasePtr Identifier); // rename

  // Destructor initialized
  virtual ~UnaryPointer(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

  int getSize() const override;
  std::string getName() const override;

  int isPtr() const override;

};

#endif

