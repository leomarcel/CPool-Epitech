/*
** EPITECH PROJECT, 2019
** eval_expr_bootstrap
** File description:
** desc
*/

int my_strtol(char **str)
{
    int	nbr = 0;

    while (**str >= '0' && **str <= '9') {
        nbr = nbr * 10 + (**str - '0');
        (*str)++;
    }
    return (nbr);
}