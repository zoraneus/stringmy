/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_str_isint
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_isint, isnt_num)
{
    cr_assert_eq(my_str_isint("AZE"), false);
    cr_assert_eq(my_str_isint("123a"), false);
    cr_assert_eq(my_str_isint("QSDe:"), false);
    cr_assert_eq(my_str_isint("123,45"), false);
    cr_assert_eq(my_str_isint("123.54"), false);
}

Test(my_str_isint, basics_int)
{
    cr_assert_eq(my_str_isint("1"), true);
    cr_assert_eq(my_str_isint("12345"), true);
}