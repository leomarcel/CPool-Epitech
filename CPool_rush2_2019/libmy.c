/*
** EPITECH PROJECT, 2019
** lib
** File description:
** lib
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;

    i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}

int my_put_nbr(int nb)
{
    int div = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }

    for (; nb / div > 9; div *= 10);
    for (; div > 0; div /= 10) {
        my_putchar(nb / div + '0');
        nb %= div;
    }
}

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32 ;

        i++;
    }
    return (str);
}