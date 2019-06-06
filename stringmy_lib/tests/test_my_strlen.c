/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strlen
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strlen, basic_string)
{
    cr_assert_eq(my_strlen("test"), 4);
}

Test(my_strlen, just_an_backslash_0)
{
    cr_assert_eq(my_strlen(""), 0);
}