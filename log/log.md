# Team 01 

Pengyuan Shao, Yi Zhang

## WorkLog
------------------------------------
- <del> Make an aim of building up trees for return 10</del> (Marked complete 01/03/2023)
- <del> Trace back the trees</del> (Marked complete 01/03/2023)
- <del> Priliminary investigation on parser and lexer </del>  (Completed 02/03/2023)
- <del> Checking out YACC parser and lexer </del>   (Completed 02/03/2023)
- <del> Building up basic structure for lexer</del>  (Completed 02/03/2023)
- <del> Building up basic structure for parser</del>  (Completed 02/03/2023)
- <del> Setting up some basic headers</del>  (Completed 02/03/2023)
  +  i.e. Function Definition, Base

- <del> Creating separate folders for hpp and cpp / creating a include file for the whole tree</del>  (Completed 03/03/2023)

- <del> Starting building up the classes</del> (Reworked complete 04/03/2023)
    + i.e. Function Definition, Return, Indentifier, Integer

- <del> Creating a proper makefile for making all the files</del> (Reworked complete 04/03/2023)

- <del> Make the tree printing for Return !!!</del> (Reworked complete 04/03/2023)

- <del> Rework Lexer, the number is not supported correctly, initial building make it similar to identifier </del> (Marked complete 05/03/2023)

- <del> Start working on Binary Operation. Creating class for all the binary operations. Tree is printing properly </del> (Marked complete 07/03/2023)

- <del> Starting creating codegen for return 10, not working</del> (Marked complete 07/03/2023)

- <del> Starting creating codegen for return 10, not working</del> (Marked complete 07/03/2023)
    + Consulting with TA and found that my test bench has not been built, also recommend .globl f

- <del> Creating testing environment. Passing 4 tests !!!!!</del> (Marked complete 07/03/2023)

- <del> Start coding binary operation. Passing 9 tests.</del> (Marked complete 08/03/2023)

- <del> Understanding stack and frame pointers</del> (Marked complete 12/03/2023)
    + Arrange a meeting with TA, understanding how sp, s0 works

- <del> Making stack and frame pointers</del> (Reworked complete 13/03/2023)

- <del> Start understanding context stuff</del> (Marked complete 12/03/2023)
    +  Arrange a meeting with TA, understanding how context works / not really understand

- <del> Building context, creating `free/ used register` and `round()` </del> (Marked complete 13/03/2023)

- <del> Doing getsize in every functions, to get the size of all the types that reaches. Return 4 for int ...</del> (Marked complete 13/03/2023)

- <del> get stack and frame pointer works using `getsize()`</del> (Marked complete 13/03/2023)

- <del> Building context, `allocate registers` used later for leftReg and rightReg in Binary Operation</del> (Marked complete 13/03/2023)

- <del> Building context, `get_register_location` `allocate_parameter`</del> (Marked complete 13/03/2023)

- <del> Passing integers for only return </del> (Marked complete 14/03/2023)
    +  i.e. return x+y

- <del> Building up trees for init_declarator, understanding how a list work </del> (Marked complete 14/03/2023)

- <del> Passing all integers, passing 25 !!! </del> (Marked complete 15/03/2023)

- <del> Building up trees for loops </del> (Marked complete 17/03/2023)

- <del> Creating codegen for loops, passing 35 !!! </del> (Marked complete 17/03/2023)

- <del> Start adding free Register in codegen </del> (Marked complete 18/03/2023)

- <del> Start building function calls and codgen </del> (Marked complete 18/03/2023)
    +   creating parameterallocation in context

- <del> Passing some tests in function calls, recursive not working </del> (Marked complete 18/03/2023)

- <del> Start making operations for differnet types </del> (Marked complete 20/03/2023)
    +   creating type name map in context

- <del> Creating codegen for different types in add sub mult div Passing 57 !!!</del> (Marked complete 21/03/2023)

- <del> Creating tree and codegen for Sizeof Passing 61 !!!</del> (Marked complete 21/03/2023)

- <del> Creating tree and codegen for pointers passing 4/5, overall passing 65 !!!</del> (Marked complete 23/03/2023)

- <del> Creating tree and codegen for Continue and Break, add extra 4 test cases to test, Passing 69/92</del> (Marked complete 24/03/2023)

-  Try making strings (Not completed)

- ALL DONE FOR COMPILER, HAND IN

## Test Passed
-------------------------------------------
We are currently passing:
- [**array**](../compiler_tests/array) - Passes 3 out of 5 cases (array not implemented)
- [**control_flow**](../compiler_tests/control_flow) - Passing 13 out of 13 cases
- [**default**](../compiler_tests/default) - Passes 5 out of 5 cases
- [**extra**](../compiler_tests/extra) - Passes 4 out of 4 cases (test for break and continue)
- [**float**](../compiler_tests/floats) - Passes 6 out of 7 cases (pow not implemented)
- [**functions**](../compiler_tests/functions) - Passes 8 out of 10 cases (recursive not implemented)
- [**integer**](../compiler_tests/integer) - Passes 12 out of 12 cases
- [**local_var**](../compiler_tests/local_var) - Passes 7 out of 7 cases
- [**misc**](../compiler_tests/misc) - Passes 0 out of 6 testcases (Not implemented)
- [**pointer**](../compiler_tests/pointer) - Passes 4 out of 5
- [**programs**](../compiler_tests/programs) - Passes 2 out of 3 cases (recursive in fibonacci not done)
- [**strings**](../compiler_tests/strings) - Passes 0 out of 5 cases (Not implemented)
- [**struct**](../compiler_tests/struct) - Passes 0 out of 5 cases (Not implemented)
- [**types**](../compiler_tests/types) - Passes 5 out of 5 cases

Overall, passing **69/92** total testcases.

