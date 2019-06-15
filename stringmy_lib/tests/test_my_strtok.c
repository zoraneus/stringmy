/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_strtok
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_strtok, basic)
{
    char **arr = my_strtok("aze", ',');
    char **arr2 = my_strtok("aze,sq,fr", ',');

    cr_assert_str_eq(arr[0], "aze");
    cr_assert_eq(arr[1], NULL);
    cr_assert_str_eq(arr2[0], "aze");
    cr_assert_str_eq(arr2[1], "sq");
    cr_assert_str_eq(arr2[2], "fr");
    cr_assert_eq(arr2[3], NULL);
    my_strtok_destroy(arr);
    my_strtok_destroy(arr2);
}

Test(my_strtok, multiple_separator)
{
    char **arr = my_strtok("aze,,sdq,,,gr", ',');

    cr_assert_str_eq(arr[0], "aze");
    cr_assert_str_eq(arr[1], "sdq");
    cr_assert_str_eq(arr[2], "gr");
    cr_assert_eq(arr[3], NULL);
    my_strtok_destroy(arr);
}
