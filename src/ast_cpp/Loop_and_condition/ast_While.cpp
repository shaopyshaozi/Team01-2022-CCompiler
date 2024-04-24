#include "ast_header/Loop_and_condition/ast_While.hpp"

// Constructor implementation
While::While(BasePtr expression, BasePtr statement) // need to change here
{
  branches.insert(branches.end(), expression);
  branches.insert(branches.end(), statement);

}

// Destructor implementation
While::~While()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void While::Print(std::ostream &stream, std::string indent) const{
  stream << indent << "While (" << std::endl;
  branches[0]->Print(stream, indent+"   ");
  stream << indent << ") {" << std::endl;
  branches[1]->Print(stream, indent+"   ");
  stream << indent << "}" << std::endl;
}



void While::generateCode(std::ostream& stream, Context &context, int destReg) const{
    std::string condition = context.getNewLabel();
    std::string main = context.makeLabel("LOOPSTART");
    std::string end = context.makeLabel("LOOPEND");

    context.PushStartLabel(main);
    context.PushEndLabel(end);

    int condition_reg = context.allocateRegister();

    stream << "j ." << condition << std::endl;

    stream << "" << main << ":" << std::endl;
    branches[1]->generateCode(stream, context ,destReg);

    stream << "." << condition << ":" << std::endl;

    branches[0]->generateCode(stream, context ,condition_reg); // passing through

    stream << "bnez " << context.int_to_register(condition_reg) << "," << main << std::endl;

    stream << "" << end << ":" << std::endl;

    context.freeRegister(condition_reg);
    context.Clearlabel();
}

int While::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
