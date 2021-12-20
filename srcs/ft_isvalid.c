#include "../includes/ft_printf.h"

int ft_isvalid(const char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
            if (ft_is_conversion(str[i + 1]) == 0)
                return (1);
        i++;
    }
    return (0);
}