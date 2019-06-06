/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strtok
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strtok, basics)
{
    char **buff = my_strtok("value1;value2;value42", ";");

    cr_assert_str_eq(buff[0], "value1");
    cr_assert_str_eq(buff[1], "value2");
    cr_assert_str_eq(buff[2], "value42");
    cr_assert_eq(buff[3], NULL);
    for (int i = 0; i < 3; i++)
        free(buff[i]);
    free(buff);
}

Test(my_strtok, multiple_token)
{
    char **buff = my_strtok("value1;;value2", ";");

    cr_assert_str_eq(buff[0], "value1");
    cr_assert_str_eq(buff[1], "value2");
    cr_assert_eq(buff[2], NULL);
    for (int i = 0; i < 2; i++)
        free(buff[i]);
    free(buff);
}

Test(my_strtok, long_token)
{
    char **buff = my_strtok("value1; value2", "; ");

    cr_assert_str_eq(buff[0], "value1");
    cr_assert_str_eq(buff[1], "value2");
    cr_assert_eq(buff[2], NULL);
    for (int i = 0; i < 2; i++)
        free(buff[i]);
    free(buff);
}

Test(my_strtok, toekn_at_end)
{
    char **buff = my_strtok("value1;value2;", ";");

    cr_assert_str_eq(buff[0], "value1");
    cr_assert_str_eq(buff[1], "value2");
    cr_assert_eq(buff[2], NULL);
    for (int i = 0; i < 2; i++)
        free(buff[i]);
    free(buff);
}