/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** my_strtok
*/

#include "my_str.h"
#include <stdio.h>

static int tok_len(char *str, char *tok)
{
    int i = 0;
    int c = 0;
    int s_tok = my_strlen(tok);

    while (str[i] != '\0') {
        if (my_strncmp(str + i, tok, s_tok)) {
            i += my_strlen(tok);
            c++;
        }
        while (my_strncmp(str + i, tok, s_tok) == 1)
            i += s_tok;
        if (str[i] == '\0')
            return ((my_strncmp(str + i - s_tok, tok, s_tok) ? c : c + 1));
        i++;
    }
    return ((my_strncmp(str + i - s_tok, tok, s_tok)) ? c : c + 1);
}

static int tok_len_substring(char *str, char *tok)
{
    int i = 0;

    while (str[i] != '\0' && my_strncmp(str + i, tok, my_strlen(tok)) == 0)
        i++;
    return (i);
}

void my_strtok_destroy(char **str_arr)
{
    int i = 0;

    while (str_arr[i]) {
        free(str_arr[i]);
        i++;
    }
    free(str_arr);
}

char **my_strtok(char *str, char *tok)
{
    int len = tok_len(str, tok);
    char **buff = malloc(sizeof(char *) * (len + 1));
    int size;
    int j = 0;

    if (buff == NULL)
        return (NULL);
    for (int i = 0; i < len; i++) {
        size = tok_len_substring(str + j, tok);
        buff[i] = my_strndup(str + j, size);
        if (buff[i] == NULL) {
            my_strtok_destroy(buff);
            return (NULL);
        }
        j += size + 1;
    }
    buff[len] = NULL;
    return (buff);
}