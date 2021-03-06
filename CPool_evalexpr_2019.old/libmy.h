/*
** EPITECH PROJECT, 2019
** lib
** File description:
** lib
*/
void my_putchar(char c);

int my_putstr(char const *str);

int my_putnbr(int nb);

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0' ){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int my_strlen(char const *str)
{
    int i;

    i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return (i);
}

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

int my_putnbr(int nb)
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