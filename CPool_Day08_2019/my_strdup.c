/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** Task 01
*/

char *my_strdup(char const *src)
{
    int len = my_strlen(src);

    char *str;
    str = malloc(sizeof(char) * len);

    my_strcpy(str, src);

    return (str);
}
