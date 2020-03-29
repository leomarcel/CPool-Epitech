/*
** EPITECH PROJECT, 2019
** exam
** File description:
** rush 3
*/

#include "libmy.h"
#include "utils.c"

int write_exep(char *str)
{
    int x = get_len(str);
    int y = get_lines(str);

    my_putstr("[rush1-3] ");
    my_putnbr(x);
    my_putchar(' ');
    my_putnbr(y);
    my_putstr(" || [rush1-4] ");
    my_putnbr(x);
    my_putchar(' ');
    my_putnbr(y);
    my_putstr(" || [rush1-5] ");
    my_putnbr(x);
    my_putchar(' ');
    my_putnbr(y);
    my_putchar('\n');
    return (0);
}

int write_res(int rush, char *str)
{
    int x = get_len(str);
    int y = get_lines(str);

    my_putstr("[rush1-");
    my_putnbr(rush);
    my_putstr("] ");
    my_putnbr(x);
    my_putchar(' ');
    my_putnbr(y);
    my_putchar('\n');
    return (0);
}

int dispatcher(char *str)
{
    int rush = differentiate(str);

    if (rush == 0)
        write_exep(str);
    else if (rush == 1 || rush == 2 || rush == 3 || rush == 4 || rush == 5)
        write_res(rush, str);
    else{
        write(2, "none\n", 5);
        return (84);
    }
    return (0);
}

int main(int argc, char **argv)
{
    char buff[2000 + 1];
    int offset = 0;
    int len;

    while ((len = read(0 , buff + offset , 20000 - offset)) > 0) {
        offset = offset + len;
    }

    buff[offset] = '\0';

    if (len < 0)
        return (84);

    dispatcher(buff);
    return (0);
}
