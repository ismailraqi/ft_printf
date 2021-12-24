/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:10:18 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/24 01:44:16 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_conversion(const char *str, int pos, int *ret, va_list args)
{
	if (str[pos] == CHARACTER)
		ft_put_c(args, ret);
	else if (str[pos] == STRING)
		ft_put_s(args, ret);
	else if (str[pos] == INTIGER || str[pos] == DECIMAL)
		ft_put_i(args, ret);
	else if (str[pos] == POINTER)
		ft_put_p(args, ret);
	else if (str[pos] == HEX_LOWER)
		ft_put_xl(args, ret);
	else if (str[pos] == HEX_UPER)
		ft_put_xu(args, ret);
	else if (str[pos] == UNSIGNED)
		ft_put_u(args, ret);
	else if (str[pos] == PERCENT)
		ft_putperc(str[pos], ret);
}
