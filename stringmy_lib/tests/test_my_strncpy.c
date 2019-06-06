/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strncpy
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strncpy, basics_same_size)
{
    char buff[5];

    my_strncpy(buff, "test", 4);
    cr_assert_str_eq(buff, "test");
}

Test(my_strncpy, basics_n_lower)
{
    char buff[5];

    my_strncpy(buff, "test n plus petit que la phrase", 4);
    cr_assert_str_eq(buff, "test");
}

Test(my_strcpy, basics_one_caracter)
{
    char buff[2];
    
    my_strncpy(buff, "a", 1);
    cr_assert_str_eq(buff, "a");
    my_strncpy(buff, "c d'une plus grande phrase", 1);
    cr_assert_str_eq(buff, "c");
}

Test(my_strncpy, basics_n_greater)
{
    char buff[5];

    my_strncpy(buff, "test", 12);
    cr_assert_str_eq(buff, "test");
}