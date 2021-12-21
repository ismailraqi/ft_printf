/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:27:20 by iraqi             #+#    #+#             */
/*   Updated: 2021/12/13 11:16:21 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*  INCLUEDS  */
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/*  INCLUEDS END */

/*  PROTOTYPES  */
int	    ft_is_conversion(char c);
void	ft_check_conversion(const char *str, int pos, int *ret_value, va_list args_list);
int     ft_isvalid(const char *str);
int	    ft_printf(const char *str, ...);
void	ft_put_c(va_list args_list, int *ret_value);
void    ft_put_s(va_list args_list, int *ret_value);
void	ft_put_i(va_list args_list, int *ret_value);
void    ft_put_p(va_list args_list, int *ret_value);
void    ft_put_xl(va_list args_list, int *ret_value);
void    ft_put_xu(va_list args_list, int *ret_value);
void    ft_put_u(va_list args_list, int *ret_value);
void	ft_putchar(char c, int *ret_value);
void	ft_putnbr(int nb, int *ret_value);
void    ft_puthex(unsigned long long address, int *ret_value, char *source);
void    ft_putstr(char *str, int *ret_value);
void    ft_hex_notion(int *ret_value);
void    ft_putunsigned(unsigned int nbr, int *ret_value);
/*  PROTOTYPES END  */

/*  MACROS  */
# define CHARACTER  'c'
# define STRING     's'
# define DECIMAL    'd'
# define INTIGER    'i'
# define UNSIGNED   'u'
# define HEX_LOWER  'x'
# define HEX_UPER   'X'
# define POINTER    'p'
/*  MACROS END */
#endif