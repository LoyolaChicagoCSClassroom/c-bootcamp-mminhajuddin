#include "token.h"
#include <stdlib.h>
#include <string.h>

token_t *create_token(token_type_t type, char *text) {
    token_t *token = malloc(sizeof(token_t));
    if (token != NULL) {
        token->type = type;
        token->text = strdup(text);
    }
    return token;
}

void destroy_token(token_t *token) {
    if (token != NULL) {
        free(token->text);
        free(token);
    }
}
