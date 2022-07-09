# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 00:29:08 by jnam              #+#    #+#              #
#    Updated: 2022/07/10 01:28:22 by jnam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_S = server
NAME_C = client
NAME_S_BONUS = server_bonus
NAME_C_BONUS = client_bonus

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = Minitalk_utils.c Minitalk_utils2.c
OBJ = $(SOURCE:.c=.o)
DEFS = minitalk.h

all: $(NAME_S) $(NAME_C)
$(NAME_S) : server.c  $(DEFS)
	$(CC) $(CFLAGS) server.c $(SRC) -o server
$(NAME_C) : client.c $(DEFS)
	$(CC) $(CFLAGS) client.c $(SRC) -o client

bonus: $(NAME_S_BONUS) $(NAME_C_BONUS)
$(NAME_S_BONUS) : server_bonus.c $(DEFS)
	$(CC) $(CFLAGS) server_bonus.c $(SRC) -o server_bonus
$(NAME_C_BONUS) : client_bonus.c $(DEFS)
	$(CC) $(CFLAGS) client_bonus.c $(SRC) -o client_bonus
	
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME_S) $(NAME_C) $(NAME_S_BONUS) $(NAME_C_BONUS)

re: fclean all bonus
