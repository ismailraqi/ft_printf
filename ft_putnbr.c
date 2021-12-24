/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:50:39 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/22 21:54:59 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *ret_value)
{
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-', ret_value);
		lnb *= -1;
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10, ret_value);
		ft_putnbr(lnb % 10, ret_value);
	}
	else
	{
		ft_putchar(lnb + 48, ret_value);
	}
}
