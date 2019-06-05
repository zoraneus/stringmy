/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** define is an str contain exclusively digits
*/

#include "my_str.h"

bool my_str_isnum(char const *str)
{
    int i = 0;
    int negative = 0;
    bool is_float = false;
    if (str[0] == '-'){
        i++;
        negative = 1;
    }
    while (str[i] != '\0'){
        if (str[i] == '.' && is_float == false){
            is_float = true;
            i++;
        }
        if (my_char_isnumber(str[i]) == 0)
            return false;
        i++;
    }
    if (i >= negative + 1)
        return true;
    return false;
}

bool my_str_isint(char const *str)
{
    int i = 0;
    int negative = 0;
    if (str[0] == '-'){
        i++;
        negative = 1;
    }
    while (str[i] != '\0'){
        if (my_char_isnumber(str[i]) == 0)
            return false;
        i++;
    }
    if (i >= negative + 1)
        return true;
    return false;
}