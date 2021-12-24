/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:50:20 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/22 21:54:59 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_i(va_list args_list, int *ret_value)
{
	int	lnb;

	lnb = va_arg(args_list, int);
	ft_putnbr(lnb, ret_value);
}
