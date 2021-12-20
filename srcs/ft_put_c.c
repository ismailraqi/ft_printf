/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:12:02 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/13 13:13:47 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_put_c(va_list args_list, int *ret_value)
{
	char	c;

	c = (char) va_arg(args_list, int);
	*ret_value += write(1, &c, 1);
}