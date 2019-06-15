/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_atoi
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_atoi, basic_positive)
{
    cr_assert_eq(my_atoi("0"), 0);
    cr_assert_eq(my_atoi("1"), 1);
    cr_assert_eq(my_atoi("10"), 10);
    cr_assert_eq(my_atoi("1054"), 1054);
}

Test(my_atoi, basic_negative)
{
    cr_assert_eq(my_atoi("-1"), -1);
    cr_assert_eq(my_atoi("-10"), -10);
    cr_assert_eq(my_atoi("-4568"), -4568);
}