/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_str_toklen
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_toklen, one_token)
{
    cr_assert_eq(my_str_toklen("aze,aze", ','), 3);
}

Test(my_str_toklen, no_token)
{
    cr_assert_eq(my_str_toklen("azefd", ','), 5);
}

Test(my_str_toklen, size_0)
{
    cr_assert_eq(my_str_toklen("", '1'), 0);
}