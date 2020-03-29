l65;5603;1cs
         /*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Task 03
*/

void my_putchar(char c){
    write(1, &c, 1);
}

int my_strlen(char const *str){
    int i;

    i = 0;

    while(str[i] != '\0'){
        i++;
    }
    my_putchar(i + 48);
}

int main(void){
    char str[] = "panda";
    my_strlen(&str);
    return(0);
}
