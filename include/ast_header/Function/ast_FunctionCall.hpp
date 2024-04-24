#ifndef ast_FunctionCall_hpp
#define ast_FunctionCall_hpp

#include "ast_header/ast_Base.hpp"


class FunctionCall
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  FunctionCall(BasePtr postfix_expression, BasePtr argument_expression_list); // implementing the child node it has?

  // Destructor initialized
  virtual ~FunctionCall();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  //std::string getName() const override;

  int getSize() const override;


};

#endif

