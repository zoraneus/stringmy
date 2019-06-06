/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strdup
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strdup, basics)
{
    char *buff = my_strdup("test");

    cr_assert_str_eq(buff, "test");
    free(buff);
}

Test(my_strdup, basics_one_caracter)
{
    char *buff = my_strdup("a");

    cr_assert_str_eq(buff, "a");
    free(buff);
}