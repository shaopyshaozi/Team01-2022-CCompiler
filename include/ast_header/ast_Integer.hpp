#ifndef ast_Integer_hpp
#define ast_Integer_hpp

#include "ast_header/ast_Base.hpp"

class Integer
  : public Base
{
protected:
  int constant;

public:
  // Constructor initialized
  Integer(int _constant);

  // Destructor initialized
  virtual ~Integer();

  // Visualising
  void Print(std::ostream &stream, std::string indent) const override;
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

  int getSize() const override;
  int getConstant() const override;


};

#endif
