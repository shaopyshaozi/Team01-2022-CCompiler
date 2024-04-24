#include "ast_header/Operator///ast_BinarySubtraction.hpp"


BinarySubtraction::BinarySubtraction(BasePtr left, BasePtr right)
{ branches.insert(branches.end(), left);
  branches.insert(branches.end(), right);
}

BinarySubtraction::~BinarySubtraction()
{
  delete branches[0];
  delete branches[1];
    // No additional cleanup needed
}

void BinarySubtraction::Print(std::ostream &stream, std::string indent) const
{
    branches[0]->Print(stream, indent + "  ");
    stream << indent << indent << "-" << std::endl;
    branches[1]->Print(stream, indent + "  ");
}

void BinarySubtraction::generateCode(std::ostream& stream, Context &context, int destReg) const
{
    std::string leftname = branches[0]->getName();
    //std::string rightname = branches[1]->getName();
// hard coded ===========================================
    if(context.isPointer(leftname) == 1){
        branches[0]->generateCode(stream, context, destReg);
        int constant = branches[1]->getConstant();
        stream << "addi " << context.int_to_register(destReg) << "," << context.int_to_register(destReg) << ",-" << constant * 4 << std::endl;
    }

// hard coded ===========================================
    else{
        int left_reg_int = context.allocateRegister();
        int right_reg_int = context.allocateRegister();

        branches[0]->generateCode(stream, context, left_reg_int);
        branches[1]->generateCode(stream, context, right_reg_int);

        std::string left_reg = context.int_to_register(left_reg_int);
        std::string right_reg = context.int_to_register(right_reg_int);
        stream << "sub " << context.int_to_register(destReg) << "," << left_reg << "," << right_reg << std::endl;

        context.freeRegister(left_reg_int);
        context.freeRegister(right_reg_int);
    }
//-------------------------------------------------------------------------------------------------------------
}

void BinarySubtraction::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const
{
    if (Type == "double"){
        int left_reg_int = context.allocateRegister();
        int right_reg_int = context.allocateRegister();

        branches[0]->generateCodeType(stream, context, left_reg_int, Type);
        branches[1]->generateCodeType(stream, context, right_reg_int, Type);

        std::string left_reg = context.int_to_register(left_reg_int);
        std::string right_reg = context.int_to_register(right_reg_int);


        stream << "fsub.d f" << context.int_to_register(destReg) << ", f" << left_reg << ", f" << right_reg << std::endl;
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


        stream << "fsub.s f" << context.int_to_register(destReg) << ", f" << left_reg << ", f" << right_reg << std::endl;
        context.freeRegister(left_reg_int);
        context.freeRegister(right_reg_int);
    }

    else{
        std::cerr << "no Type defined at Binary Subtraction" << std::endl;
    }
//-------------------------------------------------------------------------------------------------------------

}


int BinarySubtraction::getSize() const{
    return branches[0]->getSize() + branches[1]->getSize();
}
