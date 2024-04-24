#ifndef ast_If_hpp
#define ast_If_hpp

#include "ast_header/ast_Base.hpp"


class If
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  If(BasePtr expression, BasePtr statement); // implementing the child node it has?

  // Destructor initialized
  virtual ~If();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  //std::string getName() const override;

  int getSize() const override;


};

#endif

