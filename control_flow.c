#include "control_flow.h"
#include <string.h>


// Function to execute an if statement
void executeIfStatement(const char *condition) {
    // Implementation code here
}

// Function to execute an else statement
void executeElseStatement() {
    // Implementation code here
}

// Function to execute a loop
void executeLoop() {
    // Implementation code here
}


//function to execute an if-else statement
void executeIfElse(int condition, void (*ifBlock)(), void (*elseBlock)()) {
    if (condition) {
        ifBlock();  //execute the if block
    } else {
        elseBlock();  //execute the else block
    }
}

//function to execute a while loop
void executeWhileLoop(int (*condition)(), void (*loopBlock)()) {
    while (condition()) {
        loopBlock();  //execute the loop block
    }
}
