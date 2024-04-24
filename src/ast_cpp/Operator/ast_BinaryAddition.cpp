#include "ast_header/Operator/ast_BinaryAddition.hpp"

BinaryAddition::BinaryAddition(BasePtr left, BasePtr right)
{ branches.insert(branches.end(), left);
  branches.insert(branches.end(), right);
}

BinaryAddition::~BinaryAddition()
{
  delete branches[0];
  delete branches[1];
    // No additional cleanup needed
}

void BinaryAddition::Print(std::ostream &stream, std::string indent) const
{
    branches[0]->Print(stream, indent + "  ");
    stream << indent << indent << "+" << std::endl;
    branches[1]->Print(stream, indent + "  ");
}

void BinaryAddition::generateCode(std::ostream& stream, Context &context, int destReg) const
{
    std::string leftname = branches[0]->getName();
    std::string rightname = branches[1]->getName();
// hard coded ===========================================
    if(context.isPointer(leftname) == 1){
        branches[0]->generateCode(stream, context, destReg);
        int constant = branches[1]->getConstant();
        stream << "addi " << context.int_to_register(destReg) << "," << context.int_to_register(destReg) << "," << constant * 4 << std::endl;
    }

    else if(context.isPointer(rightname) == 1){
        branches[1]->generateCode(stream, context, destReg);
        int constant = branches[0]->getConstant();
        stream << "addi " << context.int_to_register(destReg) << "," << context.int_to_register(destReg) << "," << constant * 4 << std::endl;
    }
// hard coded ===========================================
    else{
        int left_reg_int = context.allocateRegister();
        int right_reg_int = context.allocateRegister();

        branches[0]->generateCode(stream, context, left_reg_int);
        branches[1]->generateCode(stream, context, right_reg_int);

        std::string left_reg = context.int_to_register(left_reg_int);
        std::string right_reg = context.int_to_register(right_reg_int);


        stream << "add " << context.int_to_register(destReg) << "," << left_reg << "," << right_reg << std::endl;
        context.freeRegister(left_reg_int);
        context.freeRegister(right_reg_int);
    }

//-------------------------------------------------------------------------------------------------------------

}

void BinaryAddition::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const
{
    if (Type == "double"){
        int left_reg_int = context.allocateRegister();
        int right_reg_int = context.allocateRegister();

        branches[0]->generateCodeType(stream, context, left_reg_int, Type);
        branches[1]->generateCodeType(stream, context, right_reg_int, Type);

        std::string left_reg = context.int_to_register(left_reg_int);
        std::string right_reg = context.int_to_register(right_reg_int);


        stream << "fadd.d f" << context.int_to_register(destReg) << ", f" << left_reg << ", f" << right_reg << std::endl;
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


        stream << "fadd.s f" << context.int_to_register(destReg) << ", f" << left_reg << ", f" << right_reg << std::endl;
        context.freeRegister(left_reg_int);
        context.freeRegister(right_reg_int);
    }

    else{
        std::cerr << "no Type defined at Binary Addition" << std::endl;
    }
//-------------------------------------------------------------------------------------------------------------

}


int BinaryAddition::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}

