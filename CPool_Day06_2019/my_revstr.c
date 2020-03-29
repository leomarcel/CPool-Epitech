/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Task 03
*/

void swap(char *a, char *b)
{
    char swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int *my_revstr(char *str)
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
        swap(str+i, str+j);
        j++;
    }
    return (str);
}