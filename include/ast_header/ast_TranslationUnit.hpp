#ifndef ast_TranslationUnit_hpp
#define ast_TranslationUnit_hpp

#include "ast_header/ast_Base.hpp"


class TranslationUnit
  : public Base     // this means the FunctionDefinition is inheraint from the Base class.
                    // We want to create all class inheriated from the Base class so the inlcude file is easy to write???
{
public:
  // Constructor initialized
  TranslationUnit(BasePtr translation_unit, BasePtr external_declaration); // implementing the child node it has?

  // Destructor initialized
  virtual ~TranslationUnit();

  // Print
  void Print(std::ostream &stream, std::string indent) const override;

  void generateCode(std::ostream& stream, Context &context, int destReg) const override;

  int getSize() const override;

};

#endif

