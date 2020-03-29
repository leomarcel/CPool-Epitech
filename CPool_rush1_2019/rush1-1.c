/*
** EPITECH PROJECT, 2019
** Rush1-1
** File description:
** Rush 1-1
*/

int arrayX(int x){
    int nb;
    int i;

    nb = x;
    i = 0;
    nb = x - 2;

    my_putchar('o');
    while(i < nb){
        my_putchar('-');
        i++;
    }
    my_putchar('o');
}

int arrayY(int y, int z)
{
    int nb;
    int i;
    int j;
    
    i = 0;
    j = 0;
    
    while(i < y){
        my_putchar('\n');
        my_putchar('|');
        while(j < z){
            my_putchar(' ');
            j++;
        }
        j = 0;
        my_putchar('|');
        i++;
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    int z;
    if (x == 0){
        write(2, "Invalid size\n", 13);
        return (1);
    }
    if (y == 0) {
        write(2, "Invalid size\n", 13);
        return (1);
    }

    y = y - 2;
    z = x - 2;
    
    arrayX(x);
    arrayY(y, z);
    arrayX(x);
    my_putchar('\n');
}
