#include "ast_header/ast_Type.hpp" // change name

// Constructor implementation
Type::Type(std::string dataType) // change name
  :type(dataType)
{} // nothing needed

// Destructor implementation
Type::~Type()  // change name
{}

void Type::Print(std::ostream &stream, std::string indent) const{ // change name

  if (type == "int"){
  stream << indent << "INT" ; // change name
  }
  else if (type == "unsigned"){
  stream << indent << "UNSIGNED"; // change name
  }
  else if (type == "double"){
  stream << indent << "DOUBLE"; // change name
  }
  else if (type == "float"){
  stream << indent << "FLOAT"; // change name
  }
  else if (type == "char"){
  stream << indent << "CHAR"; // change name
  }
  else if (type == "void"){
  stream << indent << "VOID"; // change name
  }
  else{
  stream << indent << "undefined type ";
  }
}

void Type::generateCode(std::ostream& stream, Context &context, int destReg) const
{}

int Type::getSize() const {
    if (type == "int"){
        return 4;
    }
    else if (type == "unsigned"){
    //stream << indent << "UNSIGNED"; // change name
        return 4;
    }
    else if (type == "double"){
    //stream << indent << "DOUBLE"; // change name
        return 8;
    }
    else if (type == "float"){
    //stream << indent << "FLOAT"; // change name
        return 4;
    }
    else if (type == "char"){
    //stream << indent << "FLOAT"; // change name
        return 1;
    }
    else if (type == "void"){
    //stream << indent << "FLOAT"; // change name
        return 0;  // not sure ???
    }
    else{
    //stream << indent << "undefined type ";
        std::cerr << "undefined type size" << std::endl;
    }
}

int Type::getSizeof() const {
    return 0;
}

std::string Type::getType() const {
    return type;
}
