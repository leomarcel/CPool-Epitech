/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** Task 01 (soooo hard..)
*/

#include <stdlib.h>
#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list *list = malloc(sizeof(*liste));
    linked_list.data = argv[0];
    linked_list.data = argv[1];
    linked_list.data = argv[2];

    int i;

    while(linked_list)

    while (list != NULL){
        my_putstr(linked_list.fist->next);
        my_putstr(", ");
        my_putstr(linked_list.two->next);
        my_putstr(", ");
        my_putnbr(linked_three->next);
        my_putchar('\n');x
        linked_three = linked_three->next;
        return linked_list;
}

int main(int argc, char *argv[])
{
    int i = 2;
    if (argc <= 1)
        return (84);

    my_params_to_list(argc, argv);
}