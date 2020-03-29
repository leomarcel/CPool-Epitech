/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** Task 03
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0'){
        i++;
    }
    while (j < nb){
        dest[i + j] = src[j];
        j++;
    }
    dest[j + i] = '\0';
    return (dest);
}