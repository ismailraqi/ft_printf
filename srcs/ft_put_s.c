#include "../includes/ft_printf.h"

void    ft_put_s(va_list args_list, int *ret_value)
{
    char    *str;
    int     i;

    str = (char *) va_arg(args_list, char *);
    i = -1;
    while (str[++i] != '\0')
        *ret_value += write(1, &str[i], 1);
}