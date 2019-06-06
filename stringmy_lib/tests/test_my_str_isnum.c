/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_str_is_num
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_isnum, isnt_num)
{
    cr_assert_eq(my_str_isnum("AZE"), false);
    cr_assert_eq(my_str_isnum("123a"), false);
    cr_assert_eq(my_str_isnum("QSDe:"), false);
    cr_assert_eq(my_str_isnum("123,45"), false);
}

Test(my_str_isnum, float_with_2_comma)
{
    cr_assert_eq(my_str_isnum("123.34.65"), false);
}

Test(my_str_isnum, basics_int)
{
    cr_assert_eq(my_str_isnum("1"), true);
    cr_assert_eq(my_str_isnum("12345"), true);
}

Test(my_str_isnum, basics_float)
{
    cr_assert_eq(my_str_isnum("1.5"), true);
    cr_assert_eq(my_str_isnum("15.1234"), true);
}