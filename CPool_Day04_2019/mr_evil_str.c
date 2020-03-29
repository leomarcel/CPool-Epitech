/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** Task 04
*/

void swap(char *a, char *b){
    char swap;
    
    swap = *a;
    *a = *b;
    *b = swap;
}

int *my_evil_str(char *str){
    char i;
    char j;

    i = 0;
    j = 0;
    
    while (str[i] != '\0'){
        i++;
    }
    while (i > j) {
        i--;
        swap(str+i, str+j);
        j++;
    }
    return (str);
}
