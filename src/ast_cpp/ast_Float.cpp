#include "ast_header/ast_Float.hpp" // change name

// Constructor implementation
Float::Float(double value)
  : value(value)  // here the constant is a int that pulls the constant from parser stored into a name called constant
{}


// Destructor， seems nothing to implement here

Float::~Float()
{}

// Visualising
void Float::Print(std::ostream &stream, std::string indent) const
{
    stream << indent << "Float : " << value << std::endl; // which the constant can be called here
}

void Float::generateCode(std::ostream& stream, Context &context, int destReg) const{
  //stream << functionName << ":" << std::endl;
  //stream << "li " << context.int_to_register(destReg) << "," << std::to_string(value) << std::endl;
}

void Float::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const{
  //stream << functionName << ":" << std::endl;
  //stream << "li " << context.int_to_register(destReg) << "," << std::to_string(value) << std::endl;

    if (Type == "float"){
        stream << "lui " << context.int_to_register(destReg) << ",%hi(.LC0)" << std::endl; // hard coded LC0 need to change
        stream << "flw f" << context.int_to_register(destReg) << ",%lo(.LC0)(" << context.int_to_register(destReg)<< ")" << std::endl; //hard code
        // not working, idk what to do...... / pow.c
    }

    else if (Type == "double"){
        stream << "lui " << context.int_to_register(destReg) << ",%hi(.LC0)" << std::endl; // hard coded LC0 need to change
        stream << "fld f" << context.int_to_register(destReg) << ",%lo(.LC0)(" << context.int_to_register(destReg)<< ")" << std::endl; //hard code
        // not working, idk what to do...... / pow.c
    }


    else {
        std::cerr << "reach ast_Float, not implemented/undefined type" << std::endl;
    }
}

int Float::getSize() const{ return 0;}
