#ifndef ast_Float_hpp
#define ast_Float_hpp

#include "ast_header/ast_Base.hpp"

class Float
  : public Base
{
protected:
  double value;

public:
  // Constructor initialized
  Float(double Float);

  // Destructor initialized
  virtual ~Float();

  // Visualising
  void Print(std::ostream &stream, std::string indent) const override;
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  void generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const override;


  int getSize() const override;


};

#endif
