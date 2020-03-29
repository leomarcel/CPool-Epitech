/*
** EPITECH PROJECT, 2019
** utils
** File description:
** utils_colle
*/

int get_len(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i++;
    }
    return (i);
}

int get_lines(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            j++;
        i++;
    }
    return (j);
}

int differentiate(char *str)
{
    int x = get_len(str);
    int y = get_lines(str);

    if (str[0] == 'o')
        return (1);
    if (str[0] == '*' || str[0] == '/')
        return (2);
    if (str[0] == 'A' && str[x - 1] == 'A')
        return (3);
    if (str[0] == 'A' && str[x - 1] == 'C')
    {
        if (str[(x + 1) * y - 2] == 'C')
            return (4);
        if (str[(x + 1) * y - 2] == 'A')
            return (5);
    }
    if (str[0] == 'B')
        return (0);
    return (84);
}
