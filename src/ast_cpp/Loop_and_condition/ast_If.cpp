#include "ast_header/Loop_and_condition/ast_If.hpp"

// Constructor implementation
If::If(BasePtr expression, BasePtr statement) // need to change here
{
  branches.insert(branches.end(), expression);
  branches.insert(branches.end(), statement);

}

// Destructor implementation
If::~If()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void If::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "IF (" << std::endl;
  branches[0]->Print(stream, indent+"   ");
  stream << indent << ") {" << std::endl;
  branches[1]->Print(stream, indent+"   ");
  stream << indent << "}" << std::endl;
}



void If::generateCode(std::ostream& stream, Context &context, int destReg) const{
    int temp = context.allocateRegister(); // not sure

    std::string condReg = context.int_to_register(temp);
    // generate code for condition
    branches[0]->generateCode(stream, context, temp);
    // make lable
    std::string endLabel = context.makeLabel("END");
    // Evaluate condition
    stream << "beqz " << condReg << ", " << endLabel << std::endl;
    context.freeRegister(temp);

    // Generate code for the if statement
    branches[1]->generateCode(stream, context, destReg);
    stream << "j " << endLabel << std::endl;
    
    // Generate code for the end of the if statement
    stream << endLabel << ":" << std::endl;

}


int If::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
