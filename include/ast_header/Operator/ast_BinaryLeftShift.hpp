#ifndef AST_BINARY_LEFTSHIFT_HPP
#define AST_BINARY_LEFTSHIFT_HPP

#include "ast_header/ast_Base.hpp"

class BinaryLeftShift : public Base {
public:
    BinaryLeftShift(BasePtr left, BasePtr right);
    virtual ~BinaryLeftShift();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
