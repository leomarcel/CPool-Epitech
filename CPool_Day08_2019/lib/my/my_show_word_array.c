/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** Task 03
*/

int my_show_word_array(char * const *tab)
{
    int i;
    i = 0;
    while (tab[i] != 0)
    {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}