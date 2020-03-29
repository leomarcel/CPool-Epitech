/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** desc
*/

#include "../../libmy.h"

int my_putnbr(int nb)
{
    int div = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }

    for (; nb / div > 9; div *= 10);
    for (; div > 0; div /= 10) {
        my_putchar(nb / div + '0');
        nb %= div;
    }
    return (0);
}