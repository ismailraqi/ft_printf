/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:27:27 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/13 13:15:37 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args_list;
	int		ret_value;
	int		i;
	
	va_start(args_list, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			if (ft_is_conversion(str[i + 1]) == 1)
				ft_check_convesion();			
		
	}
}