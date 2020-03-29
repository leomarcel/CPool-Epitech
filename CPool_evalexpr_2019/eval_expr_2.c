/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** evalexpr
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"
#include "include/eval_struct.h"

int nb_sign(char *str)
{
    int s = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (cha_issign(str[i]) == 1) {
            s += 1;
        }
    }
    return (s);
}

int str_par(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' || str[i] == ')') {
            return (1);
        }
    }
    return (0);
}

char **eval_par(char **tab)
{
    int x = 0;
    int p = 0;
    int y = 1;
    int n = 0;

    for (int i = 0; tab[0][i + 1] != '\0'; i++, y++) {
        if (tab[0][i] == '(') {
            for (x = 0; (tab[0][i - 1] != ')' ||
                p > 0) && tab[0][i] != '\0'; i++, x++) {
                if (tab[0][i] == '(') {
                    p++;
                }
                if (tab[0][i] == ')') {
                    p--;
                }
                tab[y][x] = tab[0][i];
            }
        }
        for (x = 0; cha_isnum(tab[0][i]) == 1 && tab[0][i] != '\0'; i++, x++) {
            tab[y][x] = tab[0][i];
        }
        y++;
        x = 0;
        tab[y][x] = tab[0][i];
    }
    return (tab);
}

char **eval_expr(char *str)
{
    char **tab = malloc(sizeof(char *) * nb_sign(str) * 2);

    for (int i = 0; i < nb_sign(str); i++) {
        tab[i] = malloc(sizeof(char) * my_strlen(str));
    }
    tab[0] = str;
    tab = eval_par(tab);
    return (tab);
}

int cha_issign(char c)
{
    if (c != '-' && c != '%' && (c < '(' || c > '+')) {
        return (0);
    }
    return (1);
}