#ifndef ast_FunctionName_hpp
#define ast_FunctionName_hpp

#include "ast_header/ast_Base.hpp"

class FunctionName
  : public Base
{
protected:
  std::string name;

public:
  // Constructor initialized
  FunctionName(std::string _identifier);

  // Destructor initialized
  virtual ~FunctionName();

  // Visualising
  void Print(std::ostream &stream, std::string indent) const override;
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  std::string getName() const override;

  int getSize() const override;

};

#endif
