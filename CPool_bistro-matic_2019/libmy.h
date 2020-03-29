/*
** EPITECH PROJECT, 2019
** lib
** File description:
** lib
*/

void my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr(int nb);
int my_strlen(char const *str);
int my_atoi(char *str);
int my_strtol(char **str);
char *my_strcpy(char *dest, char const *src);
void help(int ac, char **av);
int error_g(int ac, char **av);
int error_2(char *str);
int my_getnbr(char const *str);
int summums(char **expr);
int number(char **expr);
int mult_div(char **expr);
char *swap_tab_op(char *operators, char *expr);
char *swap_tab_base(char *base, char *expr);
int error_m(int ac, char **av);