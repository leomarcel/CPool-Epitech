/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** concat_params
*/

#include <stdlib.h>
#include "../../include/my.h"

char *concat_params(int argc, char **argv)
{
    int j = 0;
    char *taker = malloc(sizeof(char) * 50 * argc);

    for (int i = 0; i < argc; i++) {
        for (int k = 0; argv[i][k] != '\0'; k++) {
            taker[j] = argv[i][k];
            j++;
        }
        taker[j] = '\n';
        j++;
    }
    return (taker);
}

char *my_concat_params(int argc, char **argv)
{
    int j = 0;
    char *taker = malloc(sizeof(char) * 50 * argc);

    for (int i = 0; i < argc; i++) {
        for (int k = 0; argv[i][k] != '\0'; k++) {
            taker[j] = argv[i][k];
            j++;
        }
    }
    return (taker);
}