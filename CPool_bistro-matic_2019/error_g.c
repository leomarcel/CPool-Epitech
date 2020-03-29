/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** bistro
*/

#include "libmy.h"
#include "bistromatic.h"

int error_g(int ac, char **av)
{
    if (ac == 4) {
        if (my_strlen(av[1]) != my_getnbr(av[3])) {
            return (84);
        }
    }
    return (0);
}

int error_2(char *str)
{
    int i = 0;
    int a = 0;
    int b = 0;

    for (a = 0, i = 0; str[a] != '\0'; a++) {
        for (b = 0; str[b] != '\0'; b++) {
            if (str[a] == str[b]) {
                i++;
            }
            if (i == 2) {
                return (84);
            }
        }
        i = 0;
    }
    return (0);
}

int error_m(int ac, char **av)
{
    if (error_g(ac, av) == 84) {
        my_putstr("syntax error\n");
        return (84);
    } else if (error_2(av[1]) == 84) {
        my_putstr("syntax error\n");
        return (84);
    } else if (error_2(av[2]) == 84) {
        my_putstr("syntax error\n");
        return (84);
    }
    return (0);
}