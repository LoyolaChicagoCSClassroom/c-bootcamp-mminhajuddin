// #include <stdio.h>   
// #include <stdlib.h>   
// #include <string.h>   
// #include "token.h"
// #include "variables.c"
// #include "conditions.c"
// #include "control_flow.c"
// #include "functions.c"    


// int main() {

//     // Initialize variables and constants
//     Variable var;
//     Constant constant;

//     // Define a constant
//     defineConstant(&constant, "PI", 3.14);

//      // Enter the REPL loop
//     char input[100];
//     while (1) {
//         printf("R-FORTH> ");
//         fgets(input, sizeof(input), stdin);
//         // Process input and execute FORTH code
//         // Example: tokenize input, evaluate expressions, execute conditionals/loops, etc.
//     }

//     //declare variables for reading input line
//     char *line = NULL;   //set the pointer to input line
//     size_t len = 0;      //length of input line starts at 0
//     ssize_t read;        //indicates the number of characters read 

//     //tell user to enter FORTH code
//     printf("Enter FORTH code:\n");

//     //read the inputted characters until they run out
//     while ((read = getline(&line, &len, stdin)) != -1) {
//         //turn the line into a token 
//         char *token = strtok(line, " ");
//         //keep looking at tokens until they run out and reach NULL 
//         while (token != NULL) {
//             //print token
//             printf("Token: %s\n", token);
//             //go to nxt token
//             token = strtok(NULL, " ");
//         }
//     }

//     free(line);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"
#include "variables.h"
#include "conditions.h"
#include "control_flow.h"
#include "functions.h"

#include <stdio.h>   
#include <stdlib.h>   
#include <string.h>   
#include "variables.h"
#include "constants.h"
#include "functions.h"
#include "conditions.h"
#include "control_flow.h"

int main() {

    char token[] = "MY_FUNCTION"; // Example token
    executeFunction(token); // Call the executeFunction
    // Initialize variables and constants
    Variable var;
    Constant constant;
    defineConstant(&constant, "PI", 3.14);

    // Enter the REPL loop
    char input[100];
    while (1) {
        printf("R-FORTH> ");
        fgets(input, sizeof(input), stdin);
        
        // Tokenize the input and process FORTH code
        char *token = strtok(input, " ");
        while (token != NULL) {
            // Process token (e.g., evaluate expressions, execute conditionals/loops)
            printf("Token: %s\n", token);

            // Example: If token is a condition, evaluate it
            if (strcmp(token, "IF") == 0) {
                executeIfStatement(token);
            } else if (strcmp(token, "ELSE") == 0) {
                executeElseStatement();
            } else if (strcmp(token, "LOOP") == 0) {
                executeLoop();
            }
            // Example: If token is a function call, execute it
            else if (strcmp(token, "MY_FUNCTION") == 0) {
                executeFunction(token);
            }

            token = strtok(NULL, " ");
        }
    }

    return 0;
}



