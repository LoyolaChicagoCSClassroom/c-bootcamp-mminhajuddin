#ifndef INT_STACK_T_H
#define INT_STACK_T_H

class int_stack_t {
public:
    int_stack_t();  // Constructor
    ~int_stack_t(); // Destructor

    void push(int value); // Pushes an integer onto the stack
    int pop();            // Pops an integer from the stack

    void OVER();

    void ROT();

    void DROP();
    void SWAP();
    void DUP();
    void TWO_OVER();
    void TWO_DROP();

    void add();
    void subtract();
    void multiply();
    void divide();

private:
    static const int MAX_SIZE = 100; // biggest size of the stack
    int stack[MAX_SIZE];             // creating array to store integers
    int top;                       
};

#endif // INT_STACK_T_H

