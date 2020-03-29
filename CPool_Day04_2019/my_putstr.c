/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Task 02
*/

int my_putstr(char const *str){
    int i;

    i = 0;

    while(str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
