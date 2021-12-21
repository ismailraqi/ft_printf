#include "../includes/ft_printf.h"

void    ft_put_xu(va_list args_list, int *ret_value)
{
    char            *source;
    unsigned int    arg;

    source = "0123456789ABCDEF";
    arg = va_arg(args_list, unsigned int);
    ft_puthex(arg, ret_value, source);
}