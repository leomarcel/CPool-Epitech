/*
** EPITECH PROJECT, 2019
** my_print_comb2.c
** File description:
** Task 06
*/

void my_putchar(char c){
    write(1, &c, 1);
}

void my_input(char a, char b){
    my_putchar(a);
    my_putchar(b);
    my_putchar(44);
    my_putchar(32);
}

int my_print_comb2(void){
    char a;
    char b;
    
    a = 48;
    b = 48;
    int compteur;

    
}

int main(void){
    my_print_comb2();
    return(0);
}