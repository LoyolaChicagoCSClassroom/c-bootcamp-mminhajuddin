#include "int_stack_t.h"
#include <iostream> 

int_stack_t::int_stack_t() {
    top = -1; // Initialize top of stack to -1 (empty stack)
}

int_stack_t::~int_stack_t() {
}

// pushes an integer onto the stack
void int_stack_t::push(int value) {
    if (top >= MAX_SIZE - 1) {
        std::cerr << "Stack overflow!" << std::endl;
        return; 
    }

    top++;           // increment top of stack
    stack[top] = value; // store the value at the top of the stack
}

// pops an integer from the stack
int int_stack_t::pop() {
    if (top < 0) {
        std::cerr << "Stack underflow!" << std::endl;
        return -1; 
    }

    int value = stack[top]; // get the value at the top of the stack
    top--;                  // decrement top of stack
    return value;           // return the popped value
}


// copies the second element from the top of the stack to the top
void int_stack_t::OVER() {
    if (top < 1) {
        std::cerr << "OVER: Insufficient elements in stack" << std::endl;
        return;
    }

    stack[top + 1] = stack[top - 1]; // copy the second element from the top
    top++; // increment top 
}

// rotates the third element to the top of the stack
void int_stack_t::ROT() {
    if (top < 2) {
        std::cerr << "ROT: Insufficient elements in stack" << std::endl;
        return;
    }

    int temp = stack[top];
    stack[top] = stack[top - 2];
    stack[top - 2] = stack[top - 1];
    stack[top - 1] = temp;
}

// removes the top element from the stack
void int_stack_t::DROP() {
    if (top < 0) {
        std::cerr << "DROP: Stack is empty" << std::endl;
        return;
    }

    top--; // decrement top index
}

// swaps the top two pairs of stack items
void int_stack_t::SWAP() {
    if (top < 3) {
        std::cerr << "SWAP: Insufficient elements in stack" << std::endl;
        return;
    }

    std::swap(stack[top], stack[top - 2]);
    std::swap(stack[top - 1], stack[top - 3]);
}

// duplicates the top two pairs of stack items
void int_stack_t::DUP() {
    if (top < 1) {
        std::cerr << "DUP: Insufficient elements in stack" << std::endl;
        return;
    }

    stack[top + 1] = stack[top - 1];
    stack[top + 2] = stack[top];
    top += 2;
}

// copies the second pair of stack items from the top to the top
void int_stack_t::TWO_OVER() {
    if (top < 3) {
        std::cerr << "2OVER: Insufficient elements in stack" << std::endl;
        return;
    }

    stack[top + 1] = stack[top - 3];
    stack[top + 2] = stack[top - 4];
    top += 2;
}

// removes the top two pairs of stack items
void int_stack_t::TWO_DROP() {
    if (top < 3) {
        std::cerr << "2DROP: Insufficient elements in stack" << std::endl;
        return;
    }

    top -= 4;
}


// Addition
void int_stack_t::add() {
    if (top < 1) {
        std::cerr << "ADD: Insufficient elements in stack" << std::endl;
        return;
    }

    int operand2 = pop();
    int operand1 = pop();
    push(operand1 + operand2);
}

// Subtraction
void int_stack_t::subtract() {
    if (top < 1) {
        std::cerr << "SUBTRACT: Insufficient elements in stack" << std::endl;
        return;
    }

    int operand2 = pop();
    int operand1 = pop();
    push(operand1 - operand2);
}

// Multiplication 
void int_stack_t::multiply() {
    if (top < 1) {
        std::cerr << "MULTIPLY: Insufficient elements in stack" << std::endl;
        return;
    }

    int operand2 = pop();
    int operand1 = pop();
    push(operand1 * operand2);
}

// Division 
void int_stack_t::divide() {
    if (top < 1) {
        std::cerr << "DIVIDE: Insufficient elements in stack" << std::endl;
        return;
    }

    int operand2 = pop();
    if (operand2 == 0) {
        std::cerr << "DIVIDE: Division by zero" << std::endl;
        return;
    }

    int operand1 = pop();
    push(operand1 / operand2);
}