/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** evalexpr
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int eval_error_2(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (cha_isnum(str[i]) == 0 && cha_issign(str[i]) == 0) {
            return (84);
        }
    }
    return (0);
}

int eval_error(char *str)
{
    int error = 0;

    for (int i = my_strlen(str) - 1; i > 0; i--) {
        if (cha_isnum(str[i]) == 0 && str[i] != ')') {
            error = 84;
            i = 0;
        } else {
            i = 0;
        }
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(' && cha_issign(str[i - 1]) == 0) {
                my_putstr("par error\n");
                error = 84;
            }
        if (str[i] == ')' && (cha_isnum(str[i]) == 0 && str[i] != ')')) {
            my_putstr("par error\n");
            error = 84;
        }
    }
    return (error);
}

int *eval_reform_2(char *str, int *i)
{
    i[2] = 1;

    for (;str[i[0]] == '-' || str[i[0]] == '+'; i[0]++) {
        if (str[i[0]] == '-') {
            i[2] *= -1;
        }
    }
    if (str[i[0]] == '-' && cha_isnum(str[i[0] + 1]) == 1) {
        return (i);
    }
    return (i);
}

char *eval_reform(char *str)
{
    char *new = malloc(sizeof(char) * my_strlen(str));
    int *i = malloc(sizeof(int) * 3);

    for (; str[i[0]] != '\0'; i[0]++, i[1]++) {
        if (str[i[0]] == '-' || str[i[0]] == '+') {
            i = eval_reform_2(str, i);
            if (i[2] == -1) {
                new[i[1]] = '-';
                i[1]++;
                i[2] = 1;
            } else {
                new[i[1]] = '+';
                i[1]++;
            }
            i[2] = 0;
        }
        new[i[1]] = str[i[0]];
    }
    return (new);
}

int main(int ac, char **av)
{
    if (ac != 2) {
        return (84);
    }
    if (eval_error(av[1]) == 84 || eval_error_2(av[1])) {
        return (84);
    }
    char *str = eval_reform(av[1]);

    char **tab = eval_expr(str);
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }

    return (0);
}