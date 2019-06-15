/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_remove_both_caracter
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(remove_both_caracter, nothing_to_remove)
{
    char *buff = my_strdup("text");

    remove_both_caracter(&buff, ' ');
    cr_assert_str_eq(buff, "text");
    free(buff);
}

Test(remove_both_caracter, remove_start)
{
    char *buff = my_strdup("  text");

    remove_both_caracter(&buff, ' ');
    cr_assert_str_eq(buff, "text");
    free(buff);
}

Test(remove_both_caracter, remove_end)
{
    char *buff = my_strdup("text  ");

    remove_both_caracter(&buff, ' ');
    cr_assert_str_eq(buff, "text");
    free(buff);
}

Test(remove_both_caracter, remove_both)
{
    char *buff = my_strdup("  text  ");

    remove_both_caracter(&buff, ' ');
    cr_assert_str_eq(buff, "text");
    free(buff);
}

Test(remove_both_caracter, remove_only_both)
{
    char *buff = my_strdup("  plein de mots  ");

    remove_both_caracter(&buff, ' ');
    cr_assert_str_eq(buff, "plein de mots");
    free(buff);
}
