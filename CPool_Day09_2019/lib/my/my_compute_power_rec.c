/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** Task 04
*/

int my_compute_power_rec(int nb, int p)
{
    int a;
    int b;

    a = nb;
    b = p;

    if (b == 0)
        return (1);
    if (b < 0)
        return (0);
    if (b > 0)
        return nb * my_compute_power_rec(a, --b);
}
