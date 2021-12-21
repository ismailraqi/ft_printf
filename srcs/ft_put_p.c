#include "../includes/ft_printf.h"

void    ft_put_p(va_list args_list, int *ret_value)
{
    char                *source;
    unsigned long long  address;

    source = "0123456789abcdef";
    address = va_arg(args_list, unsigned long long);
    ft_hex_notion(ret_value);
    ft_puthex(address, ret_value, source);
}