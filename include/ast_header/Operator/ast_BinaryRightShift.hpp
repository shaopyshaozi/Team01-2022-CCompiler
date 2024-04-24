#ifndef AST_BINARY_RIGHTSHIFT_HPP
#define AST_BINARY_RIGHTSHIFT_HPP

#include "ast_header/ast_Base.hpp"

class BinaryRightShift : public Base {
public:
    BinaryRightShift(BasePtr left, BasePtr right);
    virtual ~BinaryRightShift();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
