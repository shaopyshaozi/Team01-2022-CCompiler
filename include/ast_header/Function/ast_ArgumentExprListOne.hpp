#ifndef ast_ArgumentExprListOne_hpp
#define ast_ArgumentExprListOne_hpp

#include "ast_header/ast_Base.hpp"


class ArgumentExprListOne
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  ArgumentExprListOne(BasePtr argument_expression_list); // implementing the child node it has?

  // Destructor initialized
  virtual ~ArgumentExprListOne();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

  int getSize() const override;
  int getParaRegLocation() const override;

};

#endif

