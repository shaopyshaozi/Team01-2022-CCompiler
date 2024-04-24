#include "ast_header/Operator/ast_BinaryAssign.hpp"

BinaryAssign::BinaryAssign(BasePtr left, BasePtr right)
{ branches.insert(branches.end(), left);
  branches.insert(branches.end(), right);
}

BinaryAssign::~BinaryAssign()
{
  delete branches[0];
  delete branches[1];
    // No ANDal cleanup needed
}

void BinaryAssign::Print(std::ostream &stream, std::string indent) const
{
    branches[0]->Print(stream, indent + "  ");
    stream << indent << indent << "=" << std::endl;
    branches[1]->Print(stream, indent + "  ");
}

void BinaryAssign::generateCode(std::ostream& stream, Context &context, int destReg) const
{
    if (branches[0]->isPtr() == 1){
        int leftReg = context.allocateRegister();
        int rightReg = context.allocateRegister();

        branches[0]->generateCode(stream, context, leftReg);
        branches[1]->generateCode(stream, context, rightReg);

        std::string name = branches[0]->getName();

        int variable_allocation = context.getVariableLocation(name);
        stream << "sw " << context.int_to_register(rightReg) << ", 0(" << context.int_to_register(leftReg) << ")" << std::endl;
        context.freeRegister(leftReg);
        context.freeRegister(rightReg);
    }
    else{
        branches[1]->generateCode(stream, context, destReg);

        std::string name = branches[0]->getName();

        int variable_allocation = context.getVariableLocation(name);
        stream << "sw " << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
    }


}

void BinaryAssign::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const
{
    if (Type == "double"){
        branches[1]->generateCode(stream, context, destReg);

        std::string name = branches[0]->getName();

        int variable_allocation = context.getVariableLocation(name);
        stream << "fsd " << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
    }

    else if (Type == "float"){
        branches[1]->generateCode(stream, context, destReg);

        std::string name = branches[0]->getName();

        int variable_allocation = context.getVariableLocation(name);
        stream << "fsw " << context.int_to_register(destReg) << "," << variable_allocation << "(s0)" << std::endl;
    }

    else{
        std::cerr << "no Type defined at Binary Division" << std::endl;
    }
//-------------------------------------------------------------------------------------------------------------

}

int BinaryAssign::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}


