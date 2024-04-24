#ifndef AST_BINARY_LOGICAND_HPP
#define AST_BINARY_LOGICAND_HPP

#include "ast_header/ast_Base.hpp"

class BinaryLogicAND : public Base {
public:
    BinaryLogicAND(BasePtr left, BasePtr right);
    virtual ~BinaryLogicAND();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
