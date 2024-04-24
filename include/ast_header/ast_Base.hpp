#ifndef ast_Base_hpp
#define ast_Base_hpp

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

#include "context.hpp"

class Base;

typedef Base *BasePtr; // defining a type BasePtr that is a pointer points to Base

class Base
{
protected:
  std::vector<BasePtr> branches; // one Base can have several branches, which is stored in a vector, which are all Base pointers

public:
  // Constructor initialized
  Base(std::vector<BasePtr> _branches); // This is for other nodes that have at least one child node
  Base(); // This is for node that has no parameter, no need for declaration in child class

  // Destructor initialized
  virtual ~Base();

  // Print the tree
  virtual void Print(std::ostream &stream, std::string indent) const;

  virtual void generateCode(std::ostream& stream, Context &context, int destReg) const;

  virtual void generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const;

  virtual std::string getName() const;

  virtual int getSize() const;
  virtual int getSizeof() const;
  virtual int getConstant() const;

  virtual int getParaRegLocation() const;

  virtual std::string getType() const;
  virtual int isAssigning() const;
  virtual int isPtr() const;

};



#endif
