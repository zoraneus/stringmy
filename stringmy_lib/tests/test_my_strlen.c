/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strlen
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strlen, basics)
{
    cr_assert_eq(my_strlen("test"), 4);
}