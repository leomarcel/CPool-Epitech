/*
** EPITECH PROJECT, 2019
** my_print_comb.c
** File description:
** Task 05
*/
void my_putchar(char c){
    write(1, &c, 1);
}

void my_input(char a, char b, char c){
    if (a == 55){
        if (b == 56){
            if(c == 57){
                my_putchar(a);
                my_putchar(b);
                my_putchar(c);
            }
        }
    }
    else{
        my_putchar(a);
	 my_putchar(b);
        my_putchar(c);
        my_putchar(44);
        my_putchar(32);
    }
}

int my_print_comb(void){
    char a;
    char b;
    char c;
    
    a = 48;
    b = 48;
    c = 48;

    while(a < 56){
        b = a + 1;
        while(b < 57){
            c = b + 1;
            while (c < 58){
                my_input(a, b ,c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void){
    my_print_comb();
    return(0);
}
