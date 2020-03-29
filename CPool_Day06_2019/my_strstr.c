/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Task 05
*/

char *my_strstr(char *str, char const *to_find)
{
    int i;

    if (str[0] != '\0'){
        i = 0;
        while (to_find[i] != '\0'){
            if(to_find[i] != str[i]){
                return (my_strstr(str++, to_find));
            }
            i++;
        }
        return (str);
    }
    else
        return (0);
}

int main(void){
    char str[] = "vive les pandas !";
    char to_find[] = "pandas";
    printf("%d", my_strstr(str, to_find));
}