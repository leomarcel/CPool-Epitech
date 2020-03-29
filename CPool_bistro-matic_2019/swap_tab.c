/*
** EPITECH PROJECT, 2019
** swap_tab
** File description:
** swap_tab.c
*/

#include "libmy.h"

char *swap_tab_op(char *operators, char *expr)
{
    int i = 0;
    char new_expr[7];
    char operators_default[7] = {'(', ')', '+', '-', '*', '/', '%', '\0'};
    my_strcpy(new_expr, expr);

    while (i < my_strlen(new_expr)) {
        for (int y = 0; y < my_strlen(operators); y++) {
            if (new_expr[i] == operators[y])
                new_expr[i] = operators_default[y];
        }
        i++;
    }
    return (new_expr);
}

char *swap_tab_base(char *base, char *expr)
{
    int i = 0;
    char new_expr[7];
    char base_default[7] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, '\0'};
    my_strcpy(new_expr, expr);

    while (i < my_strlen(new_expr)) {
        for (int y = 0; y < my_strlen(base); y++) {
            if (new_expr[i] == base[y])
                new_expr[i] = base_default[y];
        }
        i++;
    }
    return (new_expr);
}