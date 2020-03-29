/*
** EPITECH PROJECT, 2019
** rush1-4.c
** File description:
** 
*/
int error(int x, int y)
{
    if(x <= 0 || y <= 0)
    {
        write(2, "Invalid Size\n", 13);
        return (0);
    }
}

void rush(int x, int y)
{
    int i;
    int j;
    
    error(x, y);
    for(j=1; j<= y; j++){
        for(i=1; i <= x; i++){
            if(x == 1 || y == 1){
                my_putchar('B');}
            if(x > 1 && y > 1){
                if((j == 1 && i == 1) || (j == y && i == 1)){
                    my_putchar('A');}
                else if((j == 1 && i == x) || (j == y && i == x)){
                    my_putchar('C');}
                else if(j == 1 || j == y || i == 1 || i == x){
                    my_putchar('B');}
                else{
                    my_putchar(' ');}
            }
        }
        my_putchar('\n');}
}

