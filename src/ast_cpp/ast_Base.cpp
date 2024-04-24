#include "ast_header/ast_Base.hpp"

// Constructor implementation

Base::Base(std::vector<BasePtr> _branches)
  : branches(_branches)  // initializing a branches function with input parameter a vector of base pointers
{} // do nothing, overwritten in child nodes

Base::Base()
  : Base(std::vector<BasePtr>{}) // call the previous definition to just input a vector of
                                 // base pointer with no pointers in it
{} // do nothing, overwritten in child nodes


// Destructor implementation
Base::~Base()
{
  for(unsigned i = 0; i < branches.size(); i++){
    delete branches[i];
  }
}

void Base::Print(std::ostream &stream, std::string indent) const{
  stream << "Error: should not reach Base class" << std::endl;

}
void Base::generateCode(std::ostream& stream, Context &context, int destReg) const{
  stream << "Error: should not reach Base class" << std::endl;
}

void Base::generateCodeType(std::ostream& stream, Context &context, int destReg, std::string Type) const{
  stream << "Error: should not reach Base class" << std::endl;
}

std::string Base::getName() const
{
  return "<Empty>";
}

int Base::getSize() const{
  std::cerr << "Should not reach base class" << std::endl;
  return 0;
}

int Base::getSizeof() const{
  std::cerr << "Should not reach base class" << std::endl;
  return 0;
}

int Base::getConstant() const{
  std::cerr << "Should not reach base class get Constant" << std::endl;
  return 0;
}

int Base::getParaRegLocation() const
{
  std::cerr << "Should not reach base class" << std::endl;
  return 0;
}

 std::string Base::getType() const
 {
    std::cerr << "Should not reach base class" << std::endl;
    return "<Error>";
 }

int Base::isAssigning() const {
    std::cerr << "Should not reach base class" << std::endl;
    return 0;
}

int Base::isPtr() const {
    return -1;
}

