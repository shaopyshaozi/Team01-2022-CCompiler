#include "ast_header/ast_Sizeof.hpp" // change name

// Constructor implementation
Sizeof::Sizeof(BasePtr identifier) // change name
{
  branches.insert(branches.end(), identifier);
}

// Destructor implementation
Sizeof::~Sizeof()  // change name
{
  delete branches[0];
}

void Sizeof::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "Sizeof [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void Sizeof::generateCode(std::ostream& stream, Context &context, int destReg) const{
    if (getSizeof() == 0){
        int Size = branches[0]->getSize();
        stream << "li " << context.int_to_register(destReg) << "," << Size << std::endl;
    }
    else{
        std::string name = getName();
        std::string type = context.get_type(name);
        int Size;
        if (type == "int"){
            Size = 4;
        }
        else if (type == "unsigned"){
        //stream << indent << "UNSIGNED"; // change name
            Size = 4;
        }
        else if (type == "double"){
        //stream << indent << "DOUBLE"; // change name
            Size = 8;
        }
        else if (type == "float"){
        //stream << indent << "FLOAT"; // change name
            Size = 4;
        }
        else if (type == "char"){
        //stream << indent << "FLOAT"; // change name
            Size = 1;
        }
        else if (type == "void"){
        //stream << indent << "FLOAT"; // change name
            Size = 0;  // not sure ???
        }
        else{
        //stream << indent << "undefined type ";
            std::cerr << "undefined type size" << std::endl;
        }

    stream << "li " << context.int_to_register(destReg) << "," << Size << std::endl;

    }
}

int Sizeof::getSize() const{
    return branches[0]->getSize();
}

std::string Sizeof::getName() const
{
  return branches[0]->getName();
}

int Sizeof::getSizeof() const{
    return branches[0]->getSizeof();
}
