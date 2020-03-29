/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my_getnbr
*/
#include <string.h>
#include <stdio.h>
#include "../../include/my.h"

int my_strlen_nbr(char const *str);

char *my_evil_str(char *str);

int pw(int n, int p);

int count(char const *str)
{
    int s = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-' || str[i] == '+') {
            s++;
        }
    }
    return (s);
}

int sign(char const *str)
{
    int i = 0;
    int n = 0;

    if (str[0] != '-' && str[0] != '+') {
        return (0);
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] == '-' && n == 0) {
            n = 1;
        } else if (str[i] == '-' && n == 1) {
            n = 0;
        }
    }
    return (n);
}

int loop(char const *str, int k, int len)
{
    int res = 0;
    int p = 0;
    int rat = 0;

    for (int i = len - 1; p < len - k; i--) {
        rat = res;
        if ((res + (str[i] - 48) < 0)) {
            return (0);
        }
            res += (str[i] - 48) * pw(10, p);
            p++;
    }
    return (res);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int res = 0;
    int s = count(str);

    if (sign(str) == 1) {
        res = (loop(str, s, my_strlen_nbr(str)));
        res *= -1;
    } else {
        res = (loop(str, s, my_strlen_nbr(str)));
    }
    if (res > 2147483647 || res < -2147483647) {
        return (0);
    }
    return (res);
}

int pw(int n, int p)
{
    int i = 1;
    int a = n;

    if (p == 0) {
        return (1);
    } else {
        while (i < p) {
            n *= a;
            i++;
        }
    }
    return (n);
}
