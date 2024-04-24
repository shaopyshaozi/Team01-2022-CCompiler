#ifndef ast_Identifier_hpp
#define ast_Identifier_hpp

#include "ast_header/ast_Base.hpp"

class Identifier
  : public Base
{
protected:
  std::string name;

public:
  // Constructor initialized
  Identifier(std::string _identifier);

  // Destructor initialized
  virtual ~Identifier();

  // Visualising
  void Print(std::ostream &stream, std::string indent) const override;
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  void generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const override;
  std::string getName() const override;

  int getSize() const override;
  int getSizeof() const override;
  int isAssigning() const override;
  int isPtr() const override;

};

#endif
