#include "ast_header/Keywords/ast_ReturnExpr.hpp" // change name

// Constructor implementation
ReturnExpr::ReturnExpr(BasePtr expression) // change name
{
  branches.insert(branches.end(), expression);
}

// Destructor implementation
ReturnExpr::~ReturnExpr()  // change name
{
  for (auto branch : branches) {
        delete branch;
    }
}

void ReturnExpr::Print(std::ostream &stream, std::string indent) const{ // change name
  stream << indent << "ReturnExpr [" << std::endl; // change name
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

void ReturnExpr::generateCode(std::ostream& stream, Context &context, int destReg) const{
  //stream << functionName << ":" << std::endl;
  //stream << "li a5,";
    std::string Type = context.return_type.top();
    //std::cout << Type << std::endl;   testing for types

    if (Type == "float"){
        branches[0]->generateCodeType(stream, context, destReg, Type);
        const std::string& functionLabel = context.GetCurrentFunctionLabel();
        stream << "j " << functionLabel << std::endl;
    }

    else if (Type == "double"){
        branches[0]->generateCodeType(stream, context, destReg, Type);

        const std::string& functionLabel = context.GetCurrentFunctionLabel();
        stream << "j " << functionLabel << std::endl;
    }

    else {
        if (branches[0]->isPtr() == 1){
            branches[0]->generateCode(stream, context ,destReg);
            stream << "lw " << context.int_to_register(destReg) << ", 0(" << context.int_to_register(destReg) << ")" << std::endl;
            const std::string& functionLabel = context.GetCurrentFunctionLabel();
            stream << "j " << functionLabel << std::endl;
        }
        else{
            branches[0]->generateCode(stream, context ,destReg);
            //stream << std::endl;
            const std::string& functionLabel = context.GetCurrentFunctionLabel();
            stream << "j " << functionLabel << std::endl;
        }
    }
}

int ReturnExpr::getSize() const{
    return branches[0]->getSize();
}
