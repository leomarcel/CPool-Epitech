/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my_put_nbr
*/
#include "../../include/my.h"

int reverse(int nb);

int put_nbr_dix(int nb)
{
    int i = 0;
    if (nb < 0) {
        nb *= -1;
    }

    for (; nb > 0; i++) {
        nb /= 10;
    }
    return (i);
}

int my_put_nbr(int nb)
{
    int n = 0;
    int i = 0;
    char str[put_nbr_dix(nb) + 1];

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    for (; nb > 0; i++) {
        n = nb % 10;
str[i] = n + 48;
        nb /= 10;
    }
    i--;
    for (; i >= 0; i--) {
        my_putchar(str[i]);
    }
    return (0);
}
