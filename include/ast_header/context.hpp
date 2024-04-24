#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <math.h>
#include <string>
#include <stack>

// need to change the format --------------------------------------------------

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


class Context {
public:
        std::string makeLabel(std::string label){
            static int count = 0;
            return "."+label+std::to_string(count++);
        }

        std::vector<std::map<std::string, int>> variable_allocation;
        std::vector<std::string> is_pointer;
        std::map<std::string, int> parameter_reg_allocation; // map not used !!!!!!! Just Leave it
        std::map<std::string, std::string > variable_type;
        std::stack<std::string> return_type;

        int Registers[32] = {
            1,  // x0 zero address
            1,  // x1 ra return address
            1,  // x2 sp stack pointer
            1,  // x3 gp global pointer
            1,  // Thread pointer
            0, 0, 0,  // t0-t2 Temporary registers
            1, 1,  // s0-s1 Callee-saved registers
            0, 0, 0, 0, 0, 0, 0, 0,  // a0-a7 Argument registers
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  // s2-s11 Callee-saved registers
            0, 0, 0, 0  // t3-t6 Temporary registers
        };

        void usedRegister(int i) {
            Registers[i] = 1;
        }

        void freeRegister(int i) {
            Registers[i] = 0;
        }

        int isPointer(std::string name){
            for (auto const& n : is_pointer) {
                if (n == name) {
                    return 1;
                }
            }
            return 0;
        }

        int allocateRegister() {  // searches for the first free register in the range from x5 to x31 and returns its index
            for (int i = 5; i < 31; i++) {
                if (Registers[i] == 0) {
                    usedRegister(i);
                    return i;
                }
            }
            return -1;
        }
        int allocateParaRegister(std::string name, std::string Type) {  // searches for the first free register in the range from x5 to x31 and returns its index
            if (Type == "float"){
                for (static int i = 10; i < 18; i++) {
                    if (Registers[i] == 0) {
                        usedRegister(i);
                        i+=1;                           // using to free register, not sure!!!
                        return i-1;
                    }
                }
            }

            else if (Type == "double"){
                for (static int x = 10; x < 18; x++) {
                    if (Registers[x] == 0) {
                        usedRegister(x);
                        x+=1;                           // using to free register, not sure!!!
                        return x-1;
                    }
                }
            }

            else{
                for (static int y = 10; y < 18; y++) {
                    if (Registers[y] == 0) {
                        usedRegister(y);
                        y+=1;                           // using to free register, not sure!!!
                        return y-1;
                    }
                }
            }
        }

        int getParameterRegAllocation(std::string name){   // not used !!!!!!! Just Leave it
            auto it = parameter_reg_allocation.find(name);
            if (it == parameter_reg_allocation.end()) {
                std::cerr << "Parameter not found" << std::endl;
                return -1;
            }
            return it->second; // return the second item from the parameter map[name]
        }

        int round(int size){
            int mul = ceil((double)size/16);
            return 16*mul+16;
        }

        void store_type(std::string name, std::string Type){
            variable_type[name] = Type;
        }

        std::string get_type(std::string name){
            auto it = variable_type.find(name);
            if (it == variable_type.end()) {
                std::cerr << "Type not found" << std::endl;
                return "<Error>";
            }
            return it->second; // return the second item from the parameter map[name]
        }

        int variableAllocation(std::string name, std::string Type) {
            std::map<std::string, int> myMap;

            int size = 0;
            if (Type == "int") {
                size = 4;
            } else if (Type == "float") {
                size = 4;
            } else if (Type == "double") {
                size = 8;
            } else if (Type == "char") {
                size = 1;
            } else {
                std::cerr << "Unknown data type: " << Type << std::endl;
            }

            static int currentStack = -16;
            currentStack -= size;
            if (!variable_allocation.empty()) { // check if the vector is not empty
                variable_allocation.back()[name] = currentStack; // store name and stack pair in here
            }
            else{
                myMap[name] = currentStack; // at parameters int f(int x, int y), the vector might be empty
                variable_allocation.push_back(myMap);
            }

            return currentStack;
        }

        int getVariableLocation(std::string name) const {
            for (auto mapIt = variable_allocation.rbegin(); mapIt != variable_allocation.rend(); ++mapIt) {
                auto map = *mapIt;
                if (map.count(name) > 0) { // check if the map contains key "x"
                    return map.at(name); // return the value associated with key "x"
                }
            }
            return -1; // return -1 if key "x" is not found in any map
        }

        void initMap(){ // used at the start of compound statement to create an empty map(used to delete for (while/for loops))
            variable_allocation.push_back(std::map<std::string, int>()); // push an empty map
        }

        void deleteMap(){ // used at the end of compound statement to remove the latest map, so that declaration made inside
                          // such compound statment is removed, deallocate the memory for a specific variable declared within the statement.
            if (!variable_allocation.empty()) { // check if the vector is not empty
                variable_allocation.pop_back(); // remove the latest map from the vector
            }
        }

        std::string getNewLabel() {
            static int number = 0;
            number += 1;
            std::string label = "L" + std::to_string(number);
            return label;

        }



        std::string int_to_register(int index){
            std::string reg;
            switch(index) {
                case 5:
                    reg = "t0";
                    break;
                case 6:
                    reg = "t1";
                    break;
                case 7:
                    reg = "t2";
                    break;
                case 10:
                    reg = "a0";
                    break;
                case 11:
                    reg = "a1";
                    break;
                case 12:
                    reg = "a2";
                    break;
                case 13:
                    reg = "a3";
                    break;
                case 14:
                    reg = "a4";
                    break;
                case 15:
                    reg = "a5";
                    break;
                case 16:
                    reg = "a6";
                    break;
                case 17:
                    reg = "a7";
                    break;
                case 28:
                    reg = "t3";
                    break;
                case 29:
                    reg = "t4";
                    break;
                case 30:
                    reg = "t5";
                    break;
                case 31:
                    reg = "t6";
                    break;
                default:
                    reg = "False int_to_register";
                    break;
            }
            return reg;
        }



        // FUNCTIONCONTEXT
        void PushFunction(const std::string& name, const std::string& label) {
            function_stack_.push(FunctionContext(name, label));
        }

        void PopFunction() {
            function_stack_.pop();
        }

        const std::string& GetCurrentFunctionName() const {
            return function_stack_.top().GetName();
        }

        const std::string& GetCurrentFunctionLabel() const {
            return function_stack_.top().GetLabel();
        }

        // KEYWORD
        void PushStartLabel(std::string label) {
            loop_label["start"] = label;
        }

        void PushEndLabel(std::string label) {
            loop_label["end"] = label;
        }

        std::string GetStartLabel() {
            auto it = loop_label.find("start");
            if (it == loop_label.end()) {
                std::cerr << "Label not found" << std::endl;
            }
            return it->second;
        }

        std::string GetEndLabel() {
            auto it = loop_label.find("end");
            if (it == loop_label.end()) {
                std::cerr << "Label not found" << std::endl;
            }
            return it->second;
        }

        void Clearlabel() {
            loop_label.clear();
        }

    private:
        std::stack<FunctionContext> function_stack_;
        std::map<std::string, std::string> loop_label;

    };

#endif
