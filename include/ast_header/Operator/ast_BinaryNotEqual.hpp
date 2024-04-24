#ifndef AST_BINARY_NOTEQUAL_HPP
#define AST_BINARY_NOTEQUAL_HPP

#include "ast_header/ast_Base.hpp"

class BinaryNotEqual : public Base {
public:
    BinaryNotEqual(BasePtr left, BasePtr right);
    virtual ~BinaryNotEqual();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
