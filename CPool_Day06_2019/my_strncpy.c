/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Task 02
*/


char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != src[n]){
        dest[i] = src[i];
        i++;
    }
    return (dest);
}