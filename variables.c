#include "variables.h"
#include "conditions.h"
#include "control_flow.h"
#include "functions.h"
#include <string.h>
#include "constants.h"


// Function to define a variable
void defineVariable(Variable *var, const char *name, int value) {
    // Implementation code here
}

// Function to update the value of a variable
void updateVariable(Variable *var, const char *name, int value) {
    // Implementation code here
}

// //define a struct to represent a variable
// typedef struct {
//     char name[50];  // Name of the variable
//     int value;      // Value of the variable
// } Variable;

// //define a struct to represent a constant
// typedef struct {
//     char name[50];  //name of the constant
//     int value;      //value of the constant
// } Constant;

// //function to assign a value to a variable
// void assignVariable(Variable *var, int value) {
//     var->value = value;
// }

//function to define a constant
void defineConstant(Constant *constant, const char *name, double value) {
    strcpy(constant->name, name);
    constant->value = value;
}