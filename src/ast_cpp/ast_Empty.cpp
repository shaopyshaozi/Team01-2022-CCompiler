#include "ast_header/ast_Empty.hpp"

// Constructor implementation
Empty::Empty() // need to change here
{}

// Destructor implementation
Empty::~Empty()   // need to change here, might not be two branches
{}

void Empty::Print(std::ostream &stream, std::string indent) const{}



void Empty::generateCode(std::ostream& stream, Context &context, int destReg) const{

        //branches[0]->generateCode(stream, context ,destReg); // passing through
        //branches[1]->generateCode(stream, context ,destReg);

}

int Empty::getSize() const{
    return 0;
}
