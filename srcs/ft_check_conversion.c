/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:10:18 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/13 13:14:37 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_check_conversion(const char *str, int pos, int *ret_value, va_list args_list)
{
	if (str[pos] == CHARACTER)
		ft_put_c(args_list, ret_value);
	else if (str[pos] == STRING)
		ft_put_s(args_list, ret_value);
	else if (str[pos] == INTIGER || str[pos] == DECIMAL)
		ft_put_i(args_list, ret_value);
	else if (str[pos] == POINTER)
		ft_put_p(args_list, ret_value);
	else if (str[pos] == HEX_LOWER)
		ft_put_xl(args_list, ret_value);
	else if (str[pos] == HEX_UPER)
		ft_put_xu(args_list, ret_value);
	else if (str[pos] == UNSIGNED)
		ft_put_u(args_list, ret_value);
}