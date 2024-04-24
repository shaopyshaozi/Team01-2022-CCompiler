#ifndef ast_InitDeclarator_hpp // change here
#define ast_InitDeclarator_hpp // change here

#include "ast_header/ast_Base.hpp"


class InitDeclarator  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  InitDeclarator(BasePtr declarator, BasePtr init_declarator); // rename

  // Destructor initialized
  virtual ~InitDeclarator(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  void generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const override;
  int getSize() const override;
  std::string getName() const override;
  int isAssigning() const override;

};

#endif

