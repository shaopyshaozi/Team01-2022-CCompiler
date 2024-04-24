#include "ast_header/ast_ParameterDeclaration.hpp"

// Constructor implementation
ParameterDeclaration::ParameterDeclaration(BasePtr declaration_specifiers, BasePtr declarator) // need to change here
{
  branches.insert(branches.end(), declaration_specifiers);
  branches.insert(branches.end(), declarator);

}

// Destructor implementation
ParameterDeclaration::~ParameterDeclaration()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void ParameterDeclaration::Print(std::ostream &stream, std::string indent) const{
    branches[0]->Print(stream, indent);// passing through
    branches[1]->Print(stream, indent);
}

void ParameterDeclaration::generateCode(std::ostream& stream, Context &context, int destReg) const{

        // need getType here!!!!!!--------------------------------------------------------------------
    std::string Type = branches[0]->getType();
    std::string name = branches[1]->getName();
    context.store_type(name,Type);

    if (Type == "double"){
        int variable_allocation = context.variableAllocation(name,Type);
        int temp1 = context.allocateParaRegister(name, Type);
        //int temp2 = context.allocateParaRegister(name + "1");
        std::string Reg1 = context.int_to_register(temp1);
        //std::string Reg2 = context.int_to_register(temp2);
        branches[0]->generateCode(stream, context, destReg);    // passing through
        branches[1]->generateCode(stream, context, destReg);

        stream << "fsd f" << Reg1 << "," << variable_allocation << "(s0)" << std::endl;
        //stream << "sw " << Reg2 << "," << variable_allocation + 4 << "(s0)" << std::endl;
        context.freeRegister(temp1); // not sure !!!
        //context.freeRegister(temp2); // not sure !!!
    }

    else if (Type == "float"){
        int variable_allocation = context.variableAllocation(name,Type);
        int temp1 = context.allocateParaRegister(name, Type);
        //int temp2 = context.allocateParaRegister(name + "1");
        std::string Reg1 = context.int_to_register(temp1);
        //std::string Reg2 = context.int_to_register(temp2);
        branches[0]->generateCode(stream, context, destReg);    // passing through
        branches[1]->generateCode(stream, context, destReg);

        stream << "fsw f" << Reg1 << "," << variable_allocation << "(s0)" << std::endl;
        //stream << "sw " << Reg2 << "," << variable_allocation + 4 << "(s0)" << std::endl;
        context.freeRegister(temp1); // not sure !!!
        //context.freeRegister(temp2); // not sure !!!
    }

    else {
        int variable_allocation = context.variableAllocation(name,Type);
        int temp = context.allocateParaRegister(name, Type);
        std::string Reg = context.int_to_register(temp);
        branches[0]->generateCode(stream, context, destReg);    // passing through
        branches[1]->generateCode(stream, context, destReg);

        stream << "sw " << Reg << "," << variable_allocation << "(s0)" << std::endl;
        context.freeRegister(temp); // not sure !!!
    }

}

int ParameterDeclaration::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
