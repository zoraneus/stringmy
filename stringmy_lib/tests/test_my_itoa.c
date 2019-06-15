/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_itoa
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_itoa, basic_positive)
{
    char *nb1 = my_itoa(0);
    char *nb2 = my_itoa(1);
    char *nb3 = my_itoa(10);
    char *nb4 = my_itoa(16542);

    cr_assert_str_eq(nb1, "0");
    cr_assert_str_eq(nb2, "1");
    cr_assert_str_eq(nb3, "10");
    cr_assert_str_eq(nb4, "16542");
    free(nb1);
    free(nb2);
    free(nb3);
    free(nb4);
}

Test(my_itoa, basic_negative)
{
    char *nb1 = my_itoa(-1);
    char *nb2 = my_itoa(-10);
    char *nb3 = my_itoa(-16524);

    cr_assert_str_eq(nb1, "-1");
    cr_assert_str_eq(nb2, "-10");
    cr_assert_str_eq(nb3, "-16524");
    free(nb1);
    free(nb2);
    free(nb3);
}