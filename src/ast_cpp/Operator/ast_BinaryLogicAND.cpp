#include "ast_header/Operator/ast_BinaryLogicAND.hpp"

BinaryLogicAND::BinaryLogicAND(BasePtr left, BasePtr right)
{ branches.insert(branches.end(), left);
  branches.insert(branches.end(), right);
}

BinaryLogicAND::~BinaryLogicAND()
{
  delete branches[0];
  delete branches[1];
    // No ANDal cleanup needed
}

void BinaryLogicAND::Print(std::ostream &stream, std::string indent) const
{
    branches[0]->Print(stream, indent + "  ");
    stream << indent << indent << "&" << std::endl;
    branches[1]->Print(stream, indent + "  ");
}

void BinaryLogicAND::generateCode(std::ostream& stream, Context &context, int destReg) const
{
    // suppose only two parameters
//-------------------------------------------------------------------------------------------------------------
    // lw      a4,-20(s0)
    // lw      a5,-24(s0)

    int left_reg_int = context.allocateRegister();
    int right_reg_int = context.allocateRegister();

    std::string left_reg = context.int_to_register(left_reg_int);
    std::string right_reg = context.int_to_register(right_reg_int);

    std::string des_reg = context.int_to_register(destReg);

    branches[0]->generateCode(stream, context, left_reg_int);
    stream << "beq " << left_reg << ",zero,.L2" << std::endl;
    branches[1]->generateCode(stream, context, right_reg_int);
    stream << "beq " << right_reg << ",zero,.L2" << std::endl;
    stream << "li " << des_reg << ",1" << std::endl;
    stream << "j .L3" << std::endl;
    stream << ".L2:" << std::endl;
    stream << "li " << des_reg << ",0" << std::endl;
    stream << ".L3:" << std::endl;

    context.freeRegister(left_reg_int);
    context.freeRegister(right_reg_int);



//-------------------------------------------------------------------------------------------------------------
}

int BinaryLogicAND::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
