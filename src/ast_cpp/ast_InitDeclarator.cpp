#include "ast_header/ast_InitDeclarator.hpp"

// Constructor implementation
InitDeclarator::InitDeclarator(BasePtr declarator, BasePtr initializer) // need to change here
{
  branches.insert(branches.end(), declarator);
  branches.insert(branches.end(), initializer);

}

// Destructor implementation
InitDeclarator::~InitDeclarator()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void InitDeclarator::Print(std::ostream &stream, std::string indent) const{
    stream << indent << "Variable Declaration["<< std::endl;
    branches[0]->Print(stream, indent + "   ");// passing through
    branches[1]->Print(stream, indent + "   ");
    stream << indent << "]"<< std::endl;

}

void InitDeclarator::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const{
    // x = 2; similar to Binary Assign


    if (Type == "float"){
        branches[1]->generateCodeType(stream, context, destReg, Type);
        std::string name = branches[0]->getName();
        int variable_allocation = context.variableAllocation(name,Type);
        stream << "fsw f" << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
    }

    else if (Type == "double"){
        branches[1]->generateCodeType(stream, context, destReg, Type);
        std::string name = branches[0]->getName();
        int variable_allocation = context.variableAllocation(name,Type);
        stream << "fsd f" << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
    }

    else {
        branches[1]->generateCode(stream, context, destReg);
        std::string name = branches[0]->getName();
        int variable_allocation = context.variableAllocation(name,Type);
        stream << "sw " << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
    }





}

void InitDeclarator::generateCode(std::ostream& stream, Context &context, int destReg) const{

}

int InitDeclarator::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}

std::string InitDeclarator::getName() const{
    return branches[0]->getName();
}

int InitDeclarator::isAssigning() const {
    return 1;
}
