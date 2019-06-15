/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** my_str_toklen
*/

#include "my_str.h"

int my_str_toklen(char* src, char token)
{
    int i = 0;

    while (src[i] != '\0' && src[i] != token)
        i++;
    return (i);
}