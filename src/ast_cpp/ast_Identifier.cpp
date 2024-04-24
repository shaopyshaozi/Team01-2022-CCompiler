#include "ast_header/ast_Identifier.hpp"


// Constructor implementation
Identifier::Identifier(std::string _identifier)
  : name(_identifier)
{}

// Destructor， seems nothing to implement here

Identifier::~Identifier()
{}

// Visualising
void Identifier::Print(std::ostream &stream, std::string indent) const
{
    stream << indent << "Identifier : " << name << std::endl;
}

void Identifier::generateCode(std::ostream& stream, Context &context, int destReg) const{
        int dest_loc = context.getVariableLocation(name);
        stream << "lw " << context.int_to_register(destReg) << "," << dest_loc << "(s0)" << std::endl;
}

void Identifier::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const{
        if (Type == "double"){
            int dest_loc = context.getVariableLocation(name);
            stream << "fld f" << context.int_to_register(destReg) << "," << dest_loc << "(s0)" << std::endl;
        }

        else if (Type == "float"){
            int dest_loc = context.getVariableLocation(name);
            stream << "flw f" << context.int_to_register(destReg) << "," << dest_loc << "(s0)" << std::endl;
        }

        else{
            std::cerr << "Type error in indentifier" << std::endl;
        }

}

std::string Identifier::getName() const
{
  return name;
}

int Identifier::getSize() const{return 0;}

int Identifier::getSizeof() const{return 1;}

int Identifier::isAssigning() const {
    return 1;
}

int Identifier::isPtr() const{
    //return ;// need implement
}
