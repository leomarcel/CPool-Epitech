/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** Task 03
*/

int my_compute_power_it(int nb, int p)
{
    int a;
    int b;

    a = nb;
    b = p;

    if (b == 0)
        return (1);
    if (b < 0)
        return (0);
    if (b > 0){
        while (p > 1){
            a = a * nb;
            p--;
        }
        return (a);
    }
    return (0);
}

int main(){
	printf("%d", my_compute_power_it(200, 20));
}
