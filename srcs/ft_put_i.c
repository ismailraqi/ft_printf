#include "../includes/ft_printf.h"

void	ft_put_i(va_list args_list, int *ret_value)
{
	int	lnb;

	lnb = va_arg(args_list, int);
	ft_putnbr(lnb, ret_value);
}