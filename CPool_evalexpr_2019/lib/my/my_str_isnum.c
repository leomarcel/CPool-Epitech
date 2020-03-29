/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my_str_isnum
*/

#include "../../include/my.h"

int cha_isnum(char c)
{
    if (c >= '0' && c <= '9') {
        return (1);
    } else {
        return (0);
    }
}

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57) {
            return (0);
        }
    }
    return (1);
}