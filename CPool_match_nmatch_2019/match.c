/*
** EPITECH PROJECT, 2019
** match_nmatch
** File description:
** match_nmatch
*/
int my_strlen(char const *str)
{
    int i;

    i = 0;

 
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}

int match (char const *s1, char const *s2){
    int i = 0;

    if(*s1 == *s2){
        return (1);
    }


    return (0);
}

int main(){
    char s1[] = "panda";
    char s2[] = "aandaa";

    int a = match(s1, s2);
    printf("%d", a);
}