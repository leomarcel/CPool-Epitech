/*
** EPITECH PROJECT, 2019
** do_op
** File description:
** desc
*/

int do_op(int nb1, int nb2, char operator)
{

    if (operator == '+')
        return (nb1 + nb2);
    else if (operator == '-')
        return (nb1 - nb2);
    else if (operator == '*')
        return (nb1 * nb2);
    else if (operator == '/')
        return (nb1 / nb2);
    else if (operator == '%')
        return (nb1 % nb2);
    else
        return (0);
}