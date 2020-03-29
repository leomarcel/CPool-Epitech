/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my_revstr
*/
#include "../../include/my.h"

char *my_revstr(char *str)
{
    char r = 0;
    int k = my_strlen(str) - 1;

    for (int i = 0; i < k; i++) {
        r = str[i];
        str[i] = str[k];
        str[k] = r;
        k--;
    }
    return (str);
}
