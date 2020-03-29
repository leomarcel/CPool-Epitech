/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** Task 06
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    if ((nb % 2) == 0)
        return (0);
    else{
        i++;
        while (i * i <= nb){
            if (nb % i == 0){
                return (0);
            }
            i = i + 2;
        }
    }
    return (1);
}
