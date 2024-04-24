#ifndef AST_BINARY_LOGICOR_HPP
#define AST_BINARY_LOGICOR_HPP

#include "ast_header/ast_Base.hpp"

class BinaryLogicOR : public Base {
public:
    BinaryLogicOR(BasePtr left, BasePtr right);
    virtual ~BinaryLogicOR();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
