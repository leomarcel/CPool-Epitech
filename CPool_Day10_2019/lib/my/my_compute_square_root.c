/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** Task 05
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (0);

    while (i * i != nb) {
        i++;
        if (i > nb) {
            return (0);
        }
    }
    return (i);
}
