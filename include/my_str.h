/*
** EPITECH PROJECT, 2018
** my_str.h
** File description:
** contain all prototype of functions for str & char operation
*/

#ifndef MY_STR_H
#define MY_STR_H

#include <stdlib.h>
#include <stdbool.h>

/* Epitech standard lib pool function */

int my_strlen(char const *str);

bool my_str_isnum(char const *str); //float with . ok
bool my_str_isint(char const *str);

char *my_strcpy(char *dest, char const *str);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
char *my_strcat(char **s1, char const *s2);
char *my_strncat(char **s1, char const *s2, int n);
bool my_strcmp(char const *s1, char const *s2);
bool my_strncmp(char const *s1, char const *s2, int n);

// my_strtok.c
char **my_strtok(char *src, char token);
void my_strtok_destroy(char **str_arr);
void remove_both_caracter(char **src, char to_remove);

int my_str_toklen(char *src, char token);
char *my_strreplace(char **str, char const *to_find, char const *substitute);

/*  my char is   */
bool my_char_isnumber(char c);
bool my_char_isuppercase(char c);
bool my_char_islowercase(char c);
bool my_char_isletter(char c);

//conversion sys
char *my_itoa(int nb); //unfunctional negative
int my_atoi(char const *str);

#endif //MY_STR_H
