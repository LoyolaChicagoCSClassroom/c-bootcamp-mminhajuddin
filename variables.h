#ifndef VARIABLES_H
#define VARIABLES_H

// Structure to represent a variable
typedef struct {
    char name[50];
    int value;
} Variable;

// Function declarations
void defineVariable(Variable *var, const char *name, int value);
void updateVariable(Variable *var, const char *name, int value);

#endif // VARIABLES_H
