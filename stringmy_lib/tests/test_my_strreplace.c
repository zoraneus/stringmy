/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strreplace
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strreplace, basics)
{
    char *buff = my_strdup("text target text");

    my_strreplace(&buff, "target", "replaced");
    cr_assert_str_eq(buff, "text replaced text");
    free(buff);
}

Test(my_strreplace, only_target)
{
    char *buff = my_strdup("target");

    my_strreplace(&buff, "target", "replaced");
    cr_assert_str_eq(buff, "replaced");
    free(buff);
}

Test(my_strreplace, no_target)
{
    char *buff = my_strdup("no target");

    my_strreplace(&buff, "ahah", "nothing");
    cr_assert_str_eq(buff, "no target");
    free(buff);
}