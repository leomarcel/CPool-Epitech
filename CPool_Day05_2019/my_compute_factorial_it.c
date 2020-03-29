/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** Task 01
*/

int my_compute_factorial_it(int nb)
{
    int i;
    int res;

    i = nb;
    res = 1;

    if ((nb == 0) || (nb == 1))
        return (1);
    if (nb < 0)
        return (0);
    if (nb >= 13)
        return (0);
    while (i > 1){
        res = res * i;
        i--;
    }
    if (res < 0)
        return (0);
    return (res);
}
