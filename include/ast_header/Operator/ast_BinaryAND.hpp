#ifndef AST_BINARY_AND_HPP
#define AST_BINARY_AND_HPP

#include "ast_header/ast_Base.hpp"

class BinaryAND : public Base {
public:
    BinaryAND(BasePtr left, BasePtr right);
    virtual ~BinaryAND();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
