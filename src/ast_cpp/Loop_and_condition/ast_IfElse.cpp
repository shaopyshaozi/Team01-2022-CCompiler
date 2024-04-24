#include "ast_header/Loop_and_condition/ast_IfElse.hpp"

// Constructor implementation
IfElse::IfElse(BasePtr expression, BasePtr statement1, BasePtr statement2) // need to change here
{
  branches.insert(branches.end(), expression);
  branches.insert(branches.end(), statement1);
  branches.insert(branches.end(), statement2);

}

// Destructor implementation
IfElse::~IfElse()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
  delete branches[2];
}

void IfElse::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "IF (" << std::endl;
  branches[0]->Print(stream, indent+"   ");
  stream << indent << ") {" << std::endl;
  branches[1]->Print(stream, indent+"   ");
  stream << indent << "} ELSE {" << std::endl;
  branches[2]->Print(stream, indent+"   ");
  stream << indent << "}" << std::endl;
}

void IfElse::generateCode(std::ostream& stream, Context &context, int destReg) const{
    int temp = context.allocateRegister(); // not sure

    std::string condReg = context.int_to_register(temp);
    // generate code for condition
    branches[0]->generateCode(stream, context, temp);
    // make lable
    std::string elseLabel = context.makeLabel("ELSE");
    std::string endLabel = context.makeLabel("END");
    // Evaluate condition
    stream << "beqz " << condReg << ", " << elseLabel << std::endl;
    context.freeRegister(temp);

    // Generate code for the if statement
    branches[1]->generateCode(stream, context, destReg);
    stream << "j " << endLabel << std::endl;
    
    // Generate code for the else statement
    stream << elseLabel << ":" << std::endl;
    branches[2]->generateCode(stream, context, destReg);

    // Generate code for the end of the if statement
    stream << endLabel << ":" << std::endl;

}

int IfElse::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize() + branches[2]->getSize();
}
