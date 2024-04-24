#ifndef ast_FunctionDeclaratorPara_hpp
#define ast_FunctionDeclaratorPara_hpp

#include "ast_header/ast_Base.hpp"


class FunctionDeclaratorPara
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  FunctionDeclaratorPara(BasePtr direct_declarator, BasePtr parameter_type_list); // implementing the child node it has?

  // Destructor initialized
  virtual ~FunctionDeclaratorPara();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  std::string getName() const override;

  int getSize() const override;
  


};

#endif

