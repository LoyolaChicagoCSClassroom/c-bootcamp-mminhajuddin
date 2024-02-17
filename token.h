#ifndef TOKEN_H
#define TOKEN_H

//enum for token types in the main file
typedef enum {
    NUMBER,
    OPERATOR,
    SYMBOL,
    WORD
} token_type_t;

//struct to tokenize
typedef struct {
    token_type_t type;
    char *text;
} token_t;

//function prototypes
token_t *create_token(token_type_t type, char *text);
void destroy_token(token_t *token);

#endif
