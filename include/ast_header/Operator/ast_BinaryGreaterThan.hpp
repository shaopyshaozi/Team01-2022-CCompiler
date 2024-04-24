#ifndef AST_BINARY_GREATERTHAN_HPP
#define AST_BINARY_GREATERTHAN_HPP

#include "ast_header/ast_Base.hpp"

class BinaryGreaterThan : public Base {
public:
    BinaryGreaterThan(BasePtr left, BasePtr right);
    virtual ~BinaryGreaterThan();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
