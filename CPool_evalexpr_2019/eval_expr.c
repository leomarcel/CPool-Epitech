/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** evalexpr
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

char **calcul_par(char **tab)
{
    for (int i = 1; i < nb_sign(tab[0]); i++) {
        while (tab[i][0] == '(') {
            tab[i][0]++;
            tab[i][my_strlen(tab[i]) - 1] = 0;
        }
    }
    return (tab);
}

int do_op(char **tab, char *arg1, char *arg2, char o)
{
    char *operator = "+-/*%";
    void (*operation[])(int, int) = {add, sub, divi, multi, mod};

    for (int i = 0; operator[i] != '\0'; i++) {
        if (o == operator[i]) {
            operation[i](my_getnbr(arg1), my_getnbr(arg2));
        }
        my_putchar('0');
    }
}