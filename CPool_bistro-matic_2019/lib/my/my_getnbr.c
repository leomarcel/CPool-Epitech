/*
** EPITECH PROJECT, 2019
** day4
** File description:
** my_getnbr
*/

#include <stdio.h>
#include "../../libmy.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int x = 0;
    int res = 1;

    for (i = 0; str[i] == '+' || str[i] == '-'; i++) {
        while (str[i] != '\0') {
            if (str[i] == '-') {
                res = res * 1;
            }
        }
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57) {
        x = (x * 10) + str[i] - 48;
        i++;
    }
    return (x * res);
}
