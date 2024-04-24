#include "ast_header/Operator/ast_BinaryEqual.hpp"

BinaryEqual::BinaryEqual(BasePtr left, BasePtr right)
{ branches.insert(branches.end(), left);
  branches.insert(branches.end(), right);
}

BinaryEqual::~BinaryEqual()
{
  delete branches[0];
  delete branches[1];
    // No ANDal cleanup needed
}

void BinaryEqual::Print(std::ostream &stream, std::string indent) const
{
    branches[0]->Print(stream, indent + "  ");
    stream << indent << indent << "==" << std::endl;
    branches[1]->Print(stream, indent + "  ");
}

void BinaryEqual::generateCode(std::ostream& stream, Context &context, int destReg) const
{
    // suppose only two parameters
//-------------------------------------------------------------------------------------------------------------
    // lw      a4,-20(s0)
    // lw      a5,-24(s0)
    int left_reg_int = context.allocateRegister();
    int right_reg_int = context.allocateRegister();

    branches[0]->generateCode(stream, context, left_reg_int);
    branches[1]->generateCode(stream, context, right_reg_int);

    std::string left_reg = context.int_to_register(left_reg_int);
    std::string right_reg = context.int_to_register(right_reg_int);
    stream << "sub " << right_reg << "," << left_reg << "," << right_reg << std::endl;
    stream << "seqz " << right_reg << "," << right_reg << std::endl;
    stream << "andi " << context.int_to_register(destReg) << "," << right_reg << ", 0xff" << std::endl;

    context.freeRegister(left_reg_int);
    context.freeRegister(right_reg_int);

//-------------------------------------------------------------------------------------------------------------
}

int BinaryEqual::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
