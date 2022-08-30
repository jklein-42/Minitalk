# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jklein <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 16:45:55 by jklein            #+#    #+#              #
#    Updated: 2022/05/31 17:59:56 by jklein           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS 	= -Wall -Werror -Wextra
CC 		= gcc

SERVER 	= server
CLIENT 	= client

LIBFT_PRINTF 	= srcs
FLAGS 			= -Wall -Wextra -Werror -I$(LIBFT_PRINTF)/ -L$(LIBFT_PRINTF) -lftprintf

all:
		@make -s -C $(LIBFT_PRINTF)
		@gcc $(FLAGS) server.c -o $(SERVER)
		@gcc $(FLAGS) client.c -o $(CLIENT)
		@echo "[SERVER AND CLIENT SUCCESSFULLY CREATED]"

clean:
		@make clean -s -C $(LIBFT_PRINTF)

fclean: clean
		@make fclean -s -C $(LIBFT_PRINTF) 
		@rm -f $(SERVER) $(CLIENT)
		@echo "[SERVER AND CLIENT CLEANED SUCCESSFULLY]"

re: fclean all

