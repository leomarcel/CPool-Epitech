/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** desc
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}