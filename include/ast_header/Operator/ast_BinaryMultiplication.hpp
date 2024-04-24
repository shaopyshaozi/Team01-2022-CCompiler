#ifndef AST_BINARY_MULTIPLICATION_HPP
#define AST_BINARY_MULTIPLICATION_HPP

#include "ast_header/ast_Base.hpp"

class BinaryMultiplication : public Base {
public:
    BinaryMultiplication(BasePtr left, BasePtr right);
    virtual ~BinaryMultiplication();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;
    void generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const override;
    
    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
