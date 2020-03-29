/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Task 03
*/

char *my_revstr(char *str)
{
    char i;
    char j;

    i = 0;
    j = 0;

    while (str[i] != '\0'){
        i++;
    }
    while (i > j) {
        i--;
        my_swap(str+i, str+j);
        j++;
    }
    return (str);
}