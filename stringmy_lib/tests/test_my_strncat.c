/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strncat
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strncat, basics)
{
    char *buff = my_strdup("une phrase");

    my_strncat(&buff, " ou il manque un bout", 22);
    cr_assert_str_eq(buff, "une phrase ou il manque un bout");
    free(buff);
}

Test(my_strncat, basics_size_lower)
{
    char *buff = my_strdup("une phrase ");

    my_strncat(&buff, "ou il manque un bout", 12);
    cr_assert_str_eq(buff, "une phrase ou il manque");
    free(buff);
}

Test(my_strncat, basics_size_greater)
{
    char *buff = my_strdup("une phrase");

    my_strncat(&buff, " mais cette fois ci il y a la fin", 500);
    cr_assert_str_eq(buff, "une phrase mais cette fois ci il y a la fin");
    free(buff);
}