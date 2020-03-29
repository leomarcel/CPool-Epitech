/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my_get_nbr
*/
#include "../../include/my.h"

int my_strlen_nbr(char const *str)
{
    int i = 0;

    for (; (str[i] != '\0') && (str[i] < 58 && str[i] > 42); i++);
    return (i);
}