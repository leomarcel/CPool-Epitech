/*
** EPITECH PROJECT, 2019
** test_my_revstr.c
** File description:
** Task 04
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_characters_in_array)
{
    char str[6] = {"panda"};

    my_revstr(str);
    cr_assert_str_eq(str, "adnap");

}
