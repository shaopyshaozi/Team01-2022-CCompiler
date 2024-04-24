#ifndef ast_FunctionDefinition_hpp
#define ast_FunctionDefinition_hpp

#include "ast_header/ast_Base.hpp"


class FunctionDefinition : public Base {
public:
  // Constructor initialized
  FunctionDefinition(BasePtr declarationspec, BasePtr declarator, BasePtr compound_stat); // implementing the child node it has?

  // Destructor initialized
  virtual ~FunctionDefinition();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

  int getSize() const override;

};

#endif

