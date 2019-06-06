/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_strcat
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strcat, basics)
{
    char *buff = my_strdup("ma phrase");

    my_strcat(&buff, " est incomplete");
    cr_assert_str_eq(buff, "ma phrase est incomplete");
    free(buff);
}

Test(my_strcat, with_start_size_0)
{
    char *buff = my_strdup("");

    my_strcat(&buff, "une phrase");
    cr_assert_str_eq(buff, "une phrase");
    free(buff);
}

Test(my_strcat, with_inserted_size_0)
{
    char *buff = my_strdup("une phrase");

    my_strcat(&buff, "");
    cr_assert_str_eq(buff, "une phrase");
    free(buff);
}