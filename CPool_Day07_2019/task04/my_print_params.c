/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** Task 04
*/

int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc){
        my_putstr(argv[i]);
        my_putstr("\n");
        i++;
    }
}