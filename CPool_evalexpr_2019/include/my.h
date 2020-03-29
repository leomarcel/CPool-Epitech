/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** my.g
*/

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_memset(char *str, char c, int i);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int cha_isnum(char c);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int floab_nbr_dix(float nb);
int infin_longer(char *arg1, char *arg2);
char *infin_zero(char *str, int max);
char *infin_wosign(char *str);
void infin_print(char *str);
int infin_sign(char *str);
void infin_sub(char *arg1, char *arg2, char *result, int max);
void sub_manager(char **av);
int zero(char *str);
int cha_issign(char c);
char **eval_par(char **tab);
char **eval_expr(char *str);