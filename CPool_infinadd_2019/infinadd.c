/*
** EPITECH PROJECT, 2019
** Infinadd
** File description:
** InfinAdd
*/

#include <stdio.h>
#include <stdlib.h>
#include <libmy.h>

my_str_isnum(char *str[]){
    int i = 0;
    long long sum = 0;

    while(str[i] != '\0'){
        if(str[i] < 48 || str[i] > 57){
            return (0);
        }
        else{
            sum = sum*10 + (str[i] - 48);
            i++;
        }
    }
    return sum;
}

int infin_add(char *argv0, char *argv1)
{
    //printf("%s", argv0);
    //my_putstr("\n");
    int nb1 = *argv0 - 48;
    //printf("%d", nb1);
    int nb2 = *argv1 - 48;
    int compt1 = my_strlen(argv0);
    int compt2 = my_strlen(argv1);

    //int res[];

    for(int i; i != compt1; i++){
        printf("%d", argv0[i]);
        nb1 += argv0[i];
    }

    printf("%d", nb1);
    int i = 0;
    int j = 0;
    
    while (i != compt1){
        //printf("%d", i);
        i++;
    }
    char **test = "123456789";

    return (0);
}

int main(int argc, char **argv)
{
    if (argc <= 2){
        my_putstr("Trop peu d'argument.\n");
        return (0);
    }
    infin_add(argv[1], argv[2]);
}