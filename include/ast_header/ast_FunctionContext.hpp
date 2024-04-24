#ifndef FUNCTIONCONTEXT_HPP
#define FUNCTIONCONTEXT_HPP

#include <string>

class FunctionContext {
public:
    FunctionContext(const std::string& name, const std::string& label)
        : name_(name), label_(label) {}

    const std::string& GetName() const { return name_; }
    const std::string& GetLabel() const { return label_; }

private:
    std::string name_;
    std::string label_;
};