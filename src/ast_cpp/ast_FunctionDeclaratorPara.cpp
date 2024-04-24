#include "ast_header/ast_FunctionDeclaratorPara.hpp"

// Constructor implementation
FunctionDeclaratorPara::FunctionDeclaratorPara(BasePtr direct_declarator, BasePtr parameter_type_list) // need to change here
{
  branches.insert(branches.end(), direct_declarator);
  branches.insert(branches.end(), parameter_type_list);

}

// Destructor implementation
FunctionDeclaratorPara::~FunctionDeclaratorPara()   // need to change here, might not be two branches
{
  delete branches[0];
  delete branches[1];
}

void FunctionDeclaratorPara::Print(std::ostream &stream, std::string indent) const{
  branches[0]->Print(stream, indent+"   ");
  stream << indent << "Parameters [" << std::endl;
  branches[1]->Print(stream, indent+"   ");
  stream << indent << "]" << std::endl;
}

std::string FunctionDeclaratorPara::getName() const
{
  return branches[0]->getName();
}

void FunctionDeclaratorPara::generateCode(std::ostream& stream, Context &context, int destReg) const{
    branches[0]->generateCode(stream, context ,destReg);// passing through
    // suppose only two parameters
//-------------------------------------------------------------------------------------------------------------
    //sw      a0,-20(s0)
    //sw      a1,-24(s0)
    //stream << "sw a0, -20(s0)" << std::endl;
    //stream << "sw a1, -24(s0)" << std::endl;
//-------------------------------------------------------------------------------------------------------------
    branches[1]->generateCode(stream, context ,destReg);
}

int FunctionDeclaratorPara::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
