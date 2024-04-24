#ifndef AST_BINARY_OR_HPP
#define AST_BINARY_OR_HPP

#include "ast_header/ast_Base.hpp"

class BinaryOR : public Base {
public:
    BinaryOR(BasePtr left, BasePtr right);
    virtual ~BinaryOR();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
