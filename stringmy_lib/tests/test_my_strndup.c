/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strndup
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strndup, basics_same_size)
{
    char *buff;

    buff = my_strndup("test", 4);
    cr_assert_str_eq(buff, "test");
    free(buff);
}

Test(my_strndup, basics_size_lower)
{
    char *buff;

    buff = my_strndup("test d'une taille plus grande", 4);
    cr_assert_str_eq(buff, "test");
    free(buff);
}

Test(my_strndup, basics_one_caracter)
{
    char *buff;

    buff = my_strndup("phrase longue", 1);
    cr_assert_str_eq(buff, "p");
    free(buff);
}

Test(my_strndup, basics_size_greater)
{
    char *buff;

    buff = my_strndup("test", 123);
    cr_assert_str_eq(buff, "test");
    free(buff);
}