#ifndef AST_BINARY_XOR_HPP
#define AST_BINARY_XOR_HPP

#include "ast_header/ast_Base.hpp"

class BinaryXOR : public Base {
public:
    BinaryXOR(BasePtr left, BasePtr right);
    virtual ~BinaryXOR();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
