#ifndef ast_Type_hpp // change here
#define ast_Type_hpp // change here

#include "ast_header/ast_Base.hpp"


class Type  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  Type(std::string dataType); // rename

  // Destructor initialized
  virtual ~Type(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  int getSize() const override;
  int getSizeof() const override;

  std::string type;
  std::string getType() const override;

};

#endif

