/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strcmp
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strcmp, basics_same_size)
{
    cr_assert_eq(my_strcmp("test", "test"), true);
    cr_assert_eq(my_strcmp("test", "abcd"), false);
}

Test(my_strcmp, basics_differents_size)
{
    cr_assert_eq(my_strcmp("test", "testA"), false);
    cr_assert_eq(my_strcmp("test", "tes"), false);
}