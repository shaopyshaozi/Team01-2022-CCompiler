#ifndef ast_For_hpp
#define ast_For_hpp

#include "ast_header/ast_Base.hpp"


class For
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  For(BasePtr expression_statement1, BasePtr expression_statement2, BasePtr expression, BasePtr statement); // implementing the child node it has?

  // Destructor initialized
  virtual ~For();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  //std::string getName() const override;

  int getSize() const override;


};

#endif

