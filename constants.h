#ifndef CONSTANTS_H
#define CONSTANTS_H

typedef struct {
    char name[50];
    double value;
} Constant;

void defineConstant(Constant *constant, const char *name, double value);

#endif // CONSTANTS_H
