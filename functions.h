#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "function_types.h" // Include the header file with the struct definition

// Declare the executeFunction function
void executeFunction(const char *name); // Adjust the parameter type if necessary

// Function declarations
void defineFunction(Function *function, char *name, FunctionPtr ptr);

#endif // FUNCTIONS_H

