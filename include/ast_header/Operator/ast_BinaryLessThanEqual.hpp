#ifndef AST_BINARY_LESSTHANEQUAL_HPP
#define AST_BINARY_LESSTHANEQUAL_HPP

#include "ast_header/ast_Base.hpp"

class BinaryLessThanEqual : public Base {
public:
    BinaryLessThanEqual(BasePtr left, BasePtr right);
    virtual ~BinaryLessThanEqual();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;

    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
