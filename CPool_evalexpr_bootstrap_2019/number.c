/*
** EPITECH PROJECT, 2019
** number
** File description:
** Task
*/

int number(char **str){
    int res = *str - 48;
    return res;
}

int main(){
    char **test = "1";
    printf("%d", number(test));
    return(0);
}
