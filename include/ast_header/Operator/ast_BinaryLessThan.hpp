#ifndef AST_BINARY_LESSTHAN_HPP
#define AST_BINARY_LESSTHAN_HPP

#include "ast_header/ast_Base.hpp"

class BinaryLessThan : public Base {
public:
    BinaryLessThan(BasePtr left, BasePtr right);
    virtual ~BinaryLessThan();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
