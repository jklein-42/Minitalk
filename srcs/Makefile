# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jklein <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 18:02:46 by jklein            #+#    #+#              #
#    Updated: 2022/05/31 18:02:56 by jklein           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= ft_printf.c \
	   	ft_putchar_len.c \
		ft_nbr.c \
		ft_str.c \
		ft_convert_uxxp.c \
		ft_atoi.c \
		ft_strlen.c \

OBJS	= $(SRCS:.c=.o)
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
