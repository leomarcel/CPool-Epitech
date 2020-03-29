/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** Task 02
*/

int my_compute_factorial_rec(int nb)
{
    int i;

    i = nb;

    if (nb >= 13)
        return (0);
    if (i == 0)
        return (1);
    if (i < 0)
        return (0);
    if (i > 1)
        return (i * my_compute_factorial_rec(i - 1));
}
