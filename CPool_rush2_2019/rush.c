/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/

void my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int nb);

char *my_strupcase(char *str);

int pourcentage(int compteur, int compt_pour_pourcentage){
    int a = compteur * 100;
    float pourcent = (float)a / (float)compt_pour_pourcentage;
    float b = pourcent * 100;
    int before_dot = pourcent;
    int after_dot = (int) b % 100;

    my_putstr(" ");
    my_putchar('(');
    my_put_nbr(before_dot);
    my_putstr(".");
    if (after_dot < 10){
        my_putchar('0');
    }
    my_put_nbr(after_dot);
    my_putchar('%');
    my_putchar(')');
    my_putstr("\n");
}

char rush1(char *text, char *letter)
{
    int i = 0;
    int compt_pour_pourcentage = 0;
    int compteur = 0;
    char le = letter[0];
    my_strupcase(text);
    my_strupcase(letter);
    while (text[i] != '\0'){
        if ((!(letter[0] >= 'A' && letter[0] <= 'Z')))
            return (84);
        if (text[i] == letter[0])
            compteur++;
        if ((text[i] >= 'a' && text[i] <= 'z')
            || (text[i] >= 'A' && text[i] <= 'Z'))
            compt_pour_pourcentage++;
        i++;
    }
    my_putchar(le);
    my_putchar(':');
    my_put_nbr(compteur);
    pourcentage(compteur, compt_pour_pourcentage);
}

int main(int argc, char *argv[])
{
    int i = 2;
    if (argc <= 2) {
        return (84);
    }
    while (argv[i])
    {
        rush1(argv[1], argv[i]);
        i++;
    }
    return (0);
}