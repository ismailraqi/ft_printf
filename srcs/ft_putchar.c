#include "../includes/ft_printf.h"

void	ft_putchar(char c, int *ret_value)
{
	*ret_value += write(1, &c, sizeof(char));
}
