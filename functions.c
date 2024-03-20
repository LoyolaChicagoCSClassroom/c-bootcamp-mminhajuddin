#include "variables.h"
#include "conditions.h"
#include "control_flow.h"
#include "functions.h"
#include <string.h>
#include "function_types.h" // Include function types header

// Function to define a function
void defineFunction(Function *function, char *name, FunctionPtr ptr) {
    strcpy(function->name, name); // Copy the name to the struct
    function->function = ptr;     // Set the function pointer
    // Additional logic if needed
}

// Function to execute a function
void executeFunction(const char *name) {
    // Implementation code here
}

//define a function pointer type for functions
typedef void (*FunctionPtr)();

// //define a struct to represent a function
// typedef struct {
//     char name[20];        //name of the function
//     FunctionPtr function; //pointer to the function
// } Function;

//function to declare a function
void declareFunction(Function *function, char *name, FunctionPtr ptr) {
    strcpy(function->name, name);
    function->function = ptr;
}

// //function to define a function
// void defineFunction(Function *function, char *name, FunctionPtr ptr) {
//     declareFunction(function, name, ptr);
// }

//function to invoke a function
void invokeFunction(Function *function) {
    function->function();  //call the function pointer
}
