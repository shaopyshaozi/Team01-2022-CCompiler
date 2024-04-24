#include "ast_header/Loop_and_condition/ast_For.hpp"

// Constructor implementation
For::For(BasePtr expression_statement1, BasePtr expression_statement2, BasePtr expression, BasePtr statement) // need to change here
{
  branches.insert(branches.end(), expression_statement1);
  branches.insert(branches.end(), expression_statement2);
  branches.insert(branches.end(), expression);
  branches.insert(branches.end(), statement);

}

// Destructor implementation
For::~For()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
  delete branches[2];
  delete branches[3];
}

void For::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "For (" << std::endl;
  branches[0]->Print(stream, indent+"   ");
  branches[1]->Print(stream, indent+"   ");
  branches[2]->Print(stream, indent+"   ");
  stream << indent << ") {" << std::endl;
  branches[3]->Print(stream, indent+"   ");
  stream << indent << "}" << std::endl;
}



void For::generateCode(std::ostream& stream, Context &context, int destReg) const{

    std::string condition = context.getNewLabel();
    std::string main = context.makeLabel("LOOPSTART");
    std::string Continue = context.makeLabel("CONTINUE");
    std::string end = context.makeLabel("LOOPEND");

    context.PushStartLabel(Continue);
    context.PushEndLabel(end);

    int condition_reg = context.allocateRegister();

    branches[0]->generateCode(stream, context ,condition_reg); // passing through
    stream << "j ." << condition << std::endl;

    stream << "" << main << ":" << std::endl;
    branches[3]->generateCode(stream, context ,destReg);

    stream << "" << Continue << ":" << std::endl;
    branches[2]->generateCode(stream, context ,condition_reg);

    stream << "." << condition << ":" << std::endl;
    branches[1]->generateCode(stream, context ,condition_reg);

    stream << "bnez " << context.int_to_register(condition_reg) << ", " << main << std::endl;

    stream << "" << end << ":" << std::endl;

    context.freeRegister(condition_reg);
    context.Clearlabel();


}

int For::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize() + branches[2]->getSize() + branches[3]->getSize();
}
