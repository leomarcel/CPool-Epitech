/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** Task 02
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0'){
        i++;
    }
    while (src[j] != '\0'){
        dest[i + j] = src[j];
        j++;
    }
    dest[j + i] = '\0';
    return (dest);
}