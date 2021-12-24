/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:50:24 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/24 15:58:27 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_s(va_list args_list, int *ret_value)
{
	char	*str;

	str = (char *) va_arg(args_list, char *);
	if (!str)
	{
		ft_putstr("(null)", ret_value);
		return ;
	}
	ft_putstr(str, ret_value);
}
