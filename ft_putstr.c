/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:50:42 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/24 15:58:45 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *ret_value)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i], ret_value);
}
