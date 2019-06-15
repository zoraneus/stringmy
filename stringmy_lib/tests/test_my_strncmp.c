/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strncmp
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strncmp, basics_same_size)
{
    cr_assert_eq(my_strncmp("test", "test", 4), true);
    cr_assert_eq(my_strncmp("test", "best", 4), false);
}

Test(my_strncmp, basics_lower_size)
{
    cr_assert_eq(my_strncmp("test blabla", "test blu blu", 4), true);
    cr_assert_eq(my_strncmp("test blabla", "test", 4), true);
}

Test(my_strncmp, greater_size)
{
    cr_assert_eq(my_strncmp("test", "test", 15), true);
    cr_assert_eq(my_strncmp("test", "best", 15), false);
    cr_assert_eq(my_strncmp("test", "test1", 42), false);
}