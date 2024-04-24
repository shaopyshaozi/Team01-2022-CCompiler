#ifndef ast_Empty_hpp
#define ast_Empty_hpp

#include "ast_header/ast_Base.hpp"


class Empty
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  Empty(); // implementing the child node it has?

  // Destructor initialized
  virtual ~Empty();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  //std::string getName() const override;

  int getSize() const override;


};

#endif

