/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** Task 01
*/

void my_swap(int *a, int *b)
{
    char swap;

    swap = *b;
    *b = *a;
    *a = swap;
}
