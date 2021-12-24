/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:27:27 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/24 02:07:37 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args_list;
	int		ret_value;
	int		i;

	i = -1;
	ret_value = 0;
	if (ft_isvalid(str) == 1)
		return (-1);
	va_start(args_list, str);
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			if (ft_is_conversion(str[i + 1]) == 1)
				ft_check_conversion(str, ++i, &ret_value, args_list);
		}
		else
			ret_value += write(1, &str[i], 1);
	}
	va_end(args_list);
	return (ret_value);
}
