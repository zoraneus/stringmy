/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** my_strtok
*/

#include "my_str.h"

void remove_both_caracter(char **src, char to_remove)
{
    char *buff = my_strdup(*src);
    int pos_start = 0;
    int pos_end = my_strlen(buff) - 1;

    while (buff[pos_start] == to_remove && buff[pos_start] != '\0')
        pos_start++;
    if (pos_start == pos_end)
        return;
    while (buff[pos_end] == to_remove)
        pos_end--;
    free(*src);
    *src = my_strndup(buff + pos_start, pos_end - pos_start + 1);
    free(buff);
}

void my_strtok_destroy(char **arr)
{
    int i = 0;

    while (arr[i]) {
        free(arr[i]);
        i++;
    }
    free(arr);
}

static int count_iteration(char *src, char token)
{
    int nb = 1;
    int i = 0;

    while (src[i] == token)
        i++;
    while (src[i]) {
        if (src[i] == token)
            nb++;
        while (src[i] == token)
            i++;
        if (src[i])
            i++;
    }
    if (src[i - 1] == token)
        nb--;
    return (nb);

}

char **my_strtok(char *src, char token)
{
    int iteration = count_iteration(src, token);
    char **arr = malloc(sizeof(char*) * (iteration + 1));
    int offset = 0;
    
    while (src[offset] == token)
        offset++;
    for (int i = 0; i < iteration; i++) {
        arr[i] = my_strndup(src + offset, my_str_toklen(src + offset, token));
        offset += my_strlen(arr[i]);
        while (src[offset] == token)
            offset++;
    }
    arr[iteration] = NULL;
    return (arr);
}