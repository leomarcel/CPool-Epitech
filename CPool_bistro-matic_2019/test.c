//file test

char *swap_tab_op(char *operators, char *expr)
{
    int i = 0;
    char new_expr[7];
    char operators_default[7] = {'(', ')', '+', '-', '*', '/', '%', '\0'};
    my_strcpy(new_expr, expr);

    while (i < my_strlen(new_expr)) {
        for (int y = 0; y < my_strlen(operators); y++)
        {
            if (new_expr[i] == operators[y])
                new_expr[i] = operators_default[y];
        }
        i++;
    }
    printf("%s", new_expr);
    return (new_expr);
}

char *swap_tab_base(char *base, char *expr)
{
    int i = 0;
    char new_expr[7];
    char base_default[7] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, '\0'};
    my_strcpy(new_expr, expr);

    while (i < my_strlen(new_expr)) {
        for (int y = 0; y < my_strlen(base); y++)
        {
            if (new_expr[i] == base[y])
                new_expr[i] = base_default[y];
        }
        i++;
    }
    printf("%s", new_expr);
    return (new_expr);
}

int main(int argc, char const *argv[])
{
    char base[] = "0123456789";
    char operator[] = "{}vwxyz";
    char char_expr[] = "A@vi";
    swap_tab_op(operator, char_expr);
    printf("\n");
    swap_tab_base(base, char_expr);
    return (0);
}