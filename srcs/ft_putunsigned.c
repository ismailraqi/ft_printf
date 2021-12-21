#include "../includes/ft_printf.h"

void    ft_putunsigned(unsigned int nbr, int *ret_value)
{
    if (nbr < 10)
        ft_putchar(nbr + '0', ret_value);
    else
    {
        ft_putunsigned(nbr / 10, ret_value);
        ft_putunsigned(nbr % 10, ret_value);
    }
}