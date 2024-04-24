#ifndef ast_Sizeof_hpp // change here
#define ast_Sizeof_hpp // change here

#include "ast_header/ast_Base.hpp"


class Sizeof  //rename
  : public Base
{
// protected: we sometimes need protected for strings and int values
public:
  // Constructor initialized
  Sizeof(BasePtr Identifier); // rename

  // Destructor initialized
  virtual ~Sizeof(); //rename

  // Print
  void Print(std::ostream &stream, std::string indent) const override; //rename
  void generateCode(std::ostream& stream, Context &context, int destReg) const override;
  std::string getName() const override;

  int getSize() const override;
  int getSizeof() const override;

};

#endif

