/*
** EPITECH PROJECT, 2019
** bistro
** File description:
** cpool
*/

#include "./libmy.h"

void help(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_putstr("USAGE\n");
            my_putstr("./calc base operators size_read\n\n");
            my_putstr("DESCRIPTION\n"
            "- base: all the symbols of the base\n"
            "- operators: the symbols for the parentheses and the 5 operators\n"
            "- size_read: number of characters to be read\n");
        }
    }
}