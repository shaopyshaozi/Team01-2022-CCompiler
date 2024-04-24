#ifndef ast_VariableDeclaration_hpp // change here
#define ast_VariableDeclaration_hpp // change here

#include "ast_header/ast_Base.hpp"


class VariableDeclaration  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  VariableDeclaration(BasePtr declarator, BasePtr init_declarator); // rename

  // Destructor initialized
  virtual ~VariableDeclaration(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  int getSize() const override;


};

#endif

