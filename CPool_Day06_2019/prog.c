/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** Task 01
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i = i + 1;
    }
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while(src[i] != '\0' ){
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int main()
{
    char str[] = "Panda\n";
    char dest[] = "Hello\n";

    my_putstr("str : ");
    my_putstr(str);

    my_strcpy(dest, str);
    
    my_putstr("dest : ");
    my_putstr(dest);
    return (0);
}