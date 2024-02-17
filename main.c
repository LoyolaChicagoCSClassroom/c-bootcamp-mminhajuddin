#include <stdio.h>   
#include <stdlib.h>   
#include <string.h>   
#include "token.h"    

int main() {
    //declare variables for reading input line
    char *line = NULL;   //set the pointer to input line
    size_t len = 0;      //length of input line starts at 0
    ssize_t read;        //indicates the number of characters read 

    //tell user to enter FORTH code
    printf("Enter FORTH code:\n");

    //read the inputted characters until they run out
    while ((read = getline(&line, &len, stdin)) != -1) {
        //turn the line into a token 
        char *token = strtok(line, " ");
        //keep looking at tokens until they run out and reach NULL 
        while (token != NULL) {
            //print token
            printf("Token: %s\n", token);
            //go to nxt token
            token = strtok(NULL, " ");
        }
    }

    free(line);
    return 0;
}

