/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strcpy
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strcpy, basics_same_size)
{
    char buff[5];

    my_strcpy(buff, "test");
    cr_assert_str_eq(buff, "test");
}

Test(my_strcpy, basics_buff_larger)
{
    char buff[30];

    my_strcpy(buff, "une phrase longue");
    cr_assert_str_eq(buff, "une phrase longue");
}

Test(my_strcpy, only_one_caracter)
{
    char buff[2];

    my_strcpy(buff, "a");
    cr_assert_str_eq(buff, "a");
}