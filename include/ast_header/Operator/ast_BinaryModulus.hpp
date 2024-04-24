#ifndef AST_BINARY_MODULUS_HPP
#define AST_BINARY_MODULUS_HPP

#include "ast_header/ast_Base.hpp"

class BinaryModulus : public Base {
public:
    BinaryModulus(BasePtr left, BasePtr right);
    virtual ~BinaryModulus();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
