/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Task 01
*/

int my_print_alpha(void){
    char letter;
    
    letter = 96;
    
    while(letter != 122){
        letter++;
        my_putchar(letter);
    }
}
