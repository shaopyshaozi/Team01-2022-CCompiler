#ifndef AST_BINARY_EQUAL_HPP
#define AST_BINARY_EQUAL_HPP

#include "ast_header/ast_Base.hpp"

class BinaryEqual : public Base {
public:
    BinaryEqual(BasePtr left, BasePtr right);
    virtual ~BinaryEqual();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
