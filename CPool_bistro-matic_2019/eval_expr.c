/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** eval_expr.c
*/

#include "bistromatic.h"
#include "libmy.h"

int number(char **expr)
{
    int nbr;

    if (**expr == 40) {
        (*expr)++;
        nbr = summums(expr);
    }
    if (**expr == 41) {
        (*expr)++;
        return (nbr);
    }
    return (my_strtol(expr));
}

int summums(char **expr)
{
    int nbr;
    int nb2;
    char operator;
    nbr = mult_div(expr);

    while (**expr) {
        while (**expr == ' ')
            (*expr)++;
        operator = **expr;
        if (operator != '+' && operator != '-')
            return (nbr);
        (*expr)++;
        nb2 = mult_div(expr);
        if (operator == '+')
            nbr += nb2;
        else
            nbr -= nb2;
    }
    return (nbr);
}

int mult_div(char **expr)
{
    int nbr;
    int nb2;
    char ops;
    nbr = number(expr);

    while (**expr) {
        while (**expr == ' ')
            (*expr)++;
        ops = **expr;
        if (ops != '/' && ops != '*' && ops != '%') return (nbr);
        (*expr)++;
        nb2 = number(expr);
        if (ops == '/')
            nbr /= nb2;
        else if (ops == '*')
            nbr *= nb2;
        else
            nbr %= nb2;
    }
    return (nbr);
}

char *eval_expr(char const *base, char const *operators,
        char const *expr, unsigned int size)
{
    char *Exp = swap_tab_op(operators, expr);
    return (summums(&Exp));
}
