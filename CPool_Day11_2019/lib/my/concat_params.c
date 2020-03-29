/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** Task 02
*/

int len(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    while (i != argc){
        j += my_strlen(argv[i] + 1);
        i++;
    }
    return (j);
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *dest = malloc (sizeof(char) * (len(argc, argv) + 1));

    while (i != argc){
        j = 0;
        while (argv[i][j] != '\0'){
            dest[k] = argv[i][j];
            j++;
            k++;
        }
        dest[k] = '\n';
        k++;
        i++;
    }
    dest[k] = '\0';
    return (dest);
}