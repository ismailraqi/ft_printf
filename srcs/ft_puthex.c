#include "../includes/ft_printf.h"

void    ft_puthex(unsigned long long address, int *ret_value, char *source)
{
    if (address < 16)
        ft_putchar(source[address], ret_value);
    else
    {
        ft_puthex(address / 16, ret_value, source);
        ft_puthex(address % 16, ret_value, source);
    }
}