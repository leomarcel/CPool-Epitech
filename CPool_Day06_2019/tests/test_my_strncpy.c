/*
** EPITECH PROJECT, 2019
** test_my_strncpy.c
** File description:
** Task 04
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");

}
