/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);

    return (i);
}
