/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** Task 05
*/

int main(int argc, char *argv[])
{
    int i;
    i = 0;
    while (argc-- > i){
        my_putstr(argv[argc]);
        my_putstr("\n");
    }
}