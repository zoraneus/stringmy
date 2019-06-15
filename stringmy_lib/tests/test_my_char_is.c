/*
** EPITECH PROJECT, 2019
** stringmy
** File description:
** test_my_char_is
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_char_isnumber, basic)
{
    for (int i = '0'; i < '9' + 1; i++)
        cr_assert_eq(my_char_isnumber((char)i), true);
    for (int i = 'a'; i < 'z' + 1; i++)
        cr_assert_eq(my_char_isnumber((char)i), false);
    for (int i = 'A'; i < 'Z' + 1; i++)
        cr_assert_eq(my_char_isnumber((char)i), false);
}

Test(my_char_isuppercase, basic)
{
    for (int i = '0'; i < '9' + 1; i++)
        cr_assert_eq(my_char_isuppercase((char)i), false);
    for (int i = 'A'; i < 'Z' + 1; i++)
        cr_assert_eq(my_char_isuppercase((char)i), true);
    for (int i = 'a'; i < 'z' + 1; i++)
        cr_assert_eq(my_char_isuppercase((char)i), false);
}

Test(my_char_islowercase, basic)
{
    for (int i = '0'; i < '9' + 1; i++)
        cr_assert_eq(my_char_islowercase((char)i), false);
    for (int i = 'a'; i < 'z' + 1; i++)
        cr_assert_eq(my_char_islowercase((char)i), true);
    for (int i = 'A'; i < 'Z' + 1; i++)
        cr_assert_eq(my_char_islowercase((char)i), false);
}

Test(my_char_isletter, basic)
{
    for (int i = '0'; i < '9' + 1; i++)
        cr_assert_eq(my_char_isletter((char)i), false);
    for (int i = 'a'; i < 'z' + 1; i++)
        cr_assert_eq(my_char_isletter((char)i), true);
    for (int i = 'A'; i < 'Z' + 1; i++)
        cr_assert_eq(my_char_isletter((char)i), true);
}