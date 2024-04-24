# C_Compiler

This repository contains all works for Imperial College EIE second year spring IAC project. Very exhuastive project! If you happen to choose this project, **remember to start early!!!!!!**

The project started with the utilization of a template lexer and parser obtained from https://www.lysator.liu.se/c/ANSI-C-grammar-y.html and https://www.lysator.liu.se/c/ANSI-C-grammar-l.html. Please take a look at these two links as it helps a lot in constructing your lexer and parser.

With lexer and parser in place, the main focus of this project is to build a proper Abstract Syntax Trees (ASTs) and Code Generation Procedure for RISC-V assembly code.

### Abstract Syntax Trees (ASTs)
The construction of Abstract Syntax Trees are based on Object-Oriented  Programming in C++, which is not what I familiar at first (Learning it is really stressful). It involves creating `.hpp` and `.cpp`. Concepts like classes, constructors, methods, and inheritance were being utilized. By declaring a base class with some crucial methods, all other classes are inheriented from the base class. (Completing the first few classes took us like a week to figure out, but we got faster later on.)

### Code Generation for RISC-V
"To achieve this, a context was designed and maintained, which was passed through all the classes. This context was responsible for keeping track of crucial information, such as the stack and frame pointer, variable and parameter declarations, and other relevant details required during the code generation process." - from Anish Narain

## Test Passed
-------------------------------------------
We are currently passing:
- [**array**](./compiler_tests/array) - Passes 3 out of 5 cases (array not implemented)
- [**control_flow**](./compiler_tests/control_flow) - Passing 13 out of 13 cases
- [**default**](./compiler_tests/default) - Passes 5 out of 5 cases
- [**extra**](./compiler_tests/extra) - Passes 4 out of 4 cases (test for break and continue)
- [**float**](./compiler_tests/floats) - Passes 6 out of 7 cases (pow not implemented)
- [**functions**](./compiler_tests/functions) - Passes 8 out of 10 cases (recursive not implemented)
- [**integer**](./compiler_tests/integer) - Passes 12 out of 12 cases
- [**local_var**](./compiler_tests/local_var) - Passes 7 out of 7 cases
- [**misc**](./compiler_tests/misc) - Passes 0 out of 6 testcases (Not implemented)
- [**pointer**](./compiler_tests/pointer) - Passes 4 out of 5
- [**programs**](./compiler_tests/programs) - Passes 2 out of 3 cases (recursive in fibonacci not done)
- [**strings**](./compiler_tests/strings) - Passes 0 out of 5 cases (Not implemented)
- [**struct**](./compiler_tests/struct) - Passes 0 out of 5 cases (Not implemented)
- [**types**](./compiler_tests/types) - Passes 5 out of 5 cases

Overall, passing **69/92** total testcases.

