// function_types.h
#ifndef FUNCTION_TYPES_H
#define FUNCTION_TYPES_H

// Define a function pointer type
typedef void (*FunctionPtr)();

// Structure to represent a function
typedef struct {
    char name[50];         // Name of the function
    FunctionPtr function;  // Pointer to the function
} Function;

#endif // FUNCTION_TYPES_H
