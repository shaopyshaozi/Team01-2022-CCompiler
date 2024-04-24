#include "ast_header/ast_Declaration.hpp"

// Constructor implementation
Declaration::Declaration(BasePtr declaration_specifiers, BasePtr init_declarator_list) // need to change here
{
  branches.insert(branches.end(), declaration_specifiers);
  branches.insert(branches.end(), init_declarator_list);

}

// Destructor implementation
Declaration::~Declaration()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void Declaration::Print(std::ostream &stream, std::string indent) const{
  branches[0]->Print(stream, indent);
  branches[1]->Print(stream, indent);
}



void Declaration::generateCode(std::ostream& stream, Context &context, int destReg) const{

    // need getType here!!!!!!--------------------------------------------------------------------

    if (branches[1]->isAssigning() != 1){
        std::string Type = branches[0]->getType();
        std::string name = branches[1]->getName();
        context.store_type(name,Type);

        int variable_allocation = context.variableAllocation(name,Type);
        int temp = context.allocateRegister();
        std::string Reg = context.int_to_register(temp);

        branches[0]->generateCode(stream, context, destReg);    // passing through
        branches[1]->generateCode(stream, context, destReg);

        //stream << "sw " << Reg << "," << variable_allocation << "(s0)" << std::endl;
        context.freeRegister(temp); // not sure !!!
    }

    else{
        std::string Type = branches[0]->getType();
        std::string name = branches[1]->getName();
        context.store_type(name,Type);

        branches[0]->generateCode(stream, context, destReg);    // passing through
        branches[1]->generateCodeType(stream, context, destReg, Type);
    }

}

int Declaration::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
