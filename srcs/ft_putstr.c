#include "../includes/ft_printf.h"

void    ft_putstr(char *str, int *ret_value)
{
    int i;

    i = -1;
    while (str[++i] != '\0')
        ft_putchar(str[i], ret_value);
}
