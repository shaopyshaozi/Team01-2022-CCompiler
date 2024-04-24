#include "ast_header/Operator/ast_BinaryMultiplication.hpp"


BinaryMultiplication::BinaryMultiplication(BasePtr left, BasePtr right)
{ branches.insert(branches.end(), left);
  branches.insert(branches.end(), right);
}

BinaryMultiplication::~BinaryMultiplication()
{
  delete branches[0];
  delete branches[1];
    // No additional cleanup needed
}

void BinaryMultiplication::Print(std::ostream &stream, std::string indent) const
{
    branches[0]->Print(stream, indent + "  ");
    stream << indent << indent << "*" << std::endl;
    branches[1]->Print(stream, indent + "  ");
}

void BinaryMultiplication::generateCode(std::ostream& stream, Context &context, int destReg) const
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
    stream << "mul " << context.int_to_register(destReg) << "," << left_reg << "," << right_reg << std::endl;
    context.freeRegister(left_reg_int);
    context.freeRegister(right_reg_int);
//-------------------------------------------------------------------------------------------------------------
}

void BinaryMultiplication::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const
{
    if (Type == "double"){
        int left_reg_int = context.allocateRegister();
        int right_reg_int = context.allocateRegister();

        branches[0]->generateCodeType(stream, context, left_reg_int, Type);
        branches[1]->generateCodeType(stream, context, right_reg_int, Type);

        std::string left_reg = context.int_to_register(left_reg_int);
        std::string right_reg = context.int_to_register(right_reg_int);


        stream << "fmul.d f" << context.int_to_register(destReg) << ", f" << left_reg << ", f" << right_reg << std::endl;
        context.freeRegister(left_reg_int);
        context.freeRegister(right_reg_int);
    }

    else if (Type == "float"){
        int left_reg_int = context.allocateRegister();
        int right_reg_int = context.allocateRegister();

        branches[0]->generateCodeType(stream, context, left_reg_int, Type);
        branches[1]->generateCodeType(stream, context, right_reg_int, Type);

        std::string left_reg = context.int_to_register(left_reg_int);
        std::string right_reg = context.int_to_register(right_reg_int);


        stream << "fmul.s f" << context.int_to_register(destReg) << ", f" << left_reg << ", f" << right_reg << std::endl;
        context.freeRegister(left_reg_int);
        context.freeRegister(right_reg_int);
    }
}

int BinaryMultiplication::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
