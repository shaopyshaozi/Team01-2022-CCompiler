#ifndef ast_FunctionCallNoPara_hpp
#define ast_FunctionCallNoPara_hpp

#include "ast_header/ast_Base.hpp"


class FunctionCallNoPara
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  FunctionCallNoPara(BasePtr postfix_expression); // implementing the child node it has?

  // Destructor initialized
  virtual ~FunctionCallNoPara();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  //std::string getName() const override;

  int getSize() const override;


};

#endif

