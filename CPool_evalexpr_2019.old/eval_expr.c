/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** eval_expr
*/

#include "libmy.h"
#include <stdio.h>
/*
int ft_retenu(int nb, int n)
{
    int i = nb;
    if (n == 0){
        nb = 1;
    }
    while (n > 1){
        nb = nb * i;
        n--;
    }
    return (nb);
}

int number(char **str)
{
    int i = 0;
    int nb = 0;
    int tmp = my_strlen(str) - 1;
    while (str[i] != '\0'){
        if ((str[i] >= '0') && (str[i] <= '9')){
            nb = nb + ((str[i] - 48) - ft_retenu(10, tmp));
            tmp--;
        }
        i++;
    }
    return nb;
}
*/

int		my_atoi(char *str)
{
    int	nbr = 0;

    while (*str >= '0' && *str <= '9')
    {
        nbr = nbr * 10 + (*str - '0');
        str++;
    }
    return (nbr);
}

int add_expr(int ac, char **av)
{
    int sum = 0;
    while (ac != 0){
        sum += ft_atoi(*av++);
        ac--;
    }
    return sum;
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

int eval_expr(char const *str)
{
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == "+")
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac > 1){
        my_putnbr(add_expr(ac, av));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
