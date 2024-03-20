#include "variables.h"
#include "conditions.h"
#include "control_flow.h"
#include "functions.h"
#include <string.h>


// Function to evaluate a condition
int evaluateCondition(const char *condition) {
    // Implementation code here
    return 0;
}

//create function to evaluate a boolean expression and the operators
int evaluateBooleanExpression(int operand1, char *operator, int operand2) {
    if (strcmp(operator, "==") == 0) {
        return operand1 == operand2;
    } else if (strcmp(operator, "!=") == 0) {
        return operand1 != operand2;
    } else if (strcmp(operator, "<") == 0) {
        return operand1 < operand2;
    } else if (strcmp(operator, ">") == 0) {
        return operand1 > operand2;
    }

    return 0;  // Default to false
}