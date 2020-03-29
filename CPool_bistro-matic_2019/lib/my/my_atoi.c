/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int	nbr = 0;

    while (*str >= '0' && *str <= '9') {
        nbr = nbr * 10 + (*str - '0');
        str++;
    }
    return (nbr);
}