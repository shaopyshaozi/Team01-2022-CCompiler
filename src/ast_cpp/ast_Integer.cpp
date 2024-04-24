#include "ast_header/ast_Integer.hpp" // change name

// Constructor implementation
Integer::Integer(int _constant)
  : constant(_constant)  // here the constant is a int that pulls the constant from parser stored into a name called constant
{}


// Destructor， seems nothing to implement here

Integer::~Integer()
{}

// Visualising
void Integer::Print(std::ostream &stream, std::string indent) const
{
    stream << indent << "Integer : " << constant << std::endl; // which the constant can be called here
}

void Integer::generateCode(std::ostream& stream, Context &context, int destReg) const{
  //stream << functionName << ":" << std::endl;
    stream << "li " << context.int_to_register(destReg) << "," << std::to_string(constant) << std::endl;

}

int Integer::getSize() const{ return 0;}

int Integer::getConstant() const{
    return constant;
}
