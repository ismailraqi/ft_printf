# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 02:20:48 by iraqi             #+#    #+#              #
#    Updated: 2021/12/23 23:13:31 by iraqi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libftprintf.a
CFLAGS = -Werror -Wall -Wextra
SRC =	ft_check_conversion.c\
		ft_hex_notion.c\
		ft_is_conversion.c\
		ft_isvalid.c\
		ft_printf.c\
		ft_put_c.c\
		ft_put_i.c\
		ft_put_p.c\
		ft_put_s.c\
		ft_put_u.c\
		ft_put_xl.c\
		ft_put_xu.c\
		ft_putchar.c\
		ft_puthex.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_putunsigned.c\
		ft_putperc.c
		 
OBJS = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
clean :
	rm -f $(OBJS)
	
fclean :clean
	rm -f $(NAME)

%.o : %.c
	cc $(CFLAGS) -o $@ -c $<

re: clean all