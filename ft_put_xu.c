/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_xu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:50:31 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/22 21:54:59 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_xu(va_list args_list, int *ret_value)
{
	char			*source;
	unsigned int	arg;

	source = "0123456789ABCDEF";
	arg = va_arg(args_list, unsigned int);
	ft_puthex(arg, ret_value, source);
}
