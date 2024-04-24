#ifndef AST_BINARY_SUBTRACTION_HPP
#define AST_BINARY_SUBTRACTION_HPP

#include "ast_header/ast_Base.hpp"

class BinarySubtraction : public Base {
public:
    BinarySubtraction(BasePtr left, BasePtr right);
    virtual ~BinarySubtraction();

    void Print(std::ostream &stream, std::string indent) const override;

    void generateCode(std::ostream& stream, Context &context, int destReg) const override;
    void generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const override;
    
    int getSize() const override;
};

#endif /* AST_BINARY_ADD_HPP */
