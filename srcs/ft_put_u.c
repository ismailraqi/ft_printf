#include "../includes/ft_printf.h"

void    ft_put_u(va_list args_list, int *ret_value)
{
    unsigned int    uns_i;

    uns_i = va_arg(args_list, unsigned int);
    ft_putunsigned(uns_i, ret_value);
}