# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 17:33:42 by jnam              #+#    #+#              #
#    Updated: 2022/06/25 17:43:09 by jnam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_S = server
NAME_C = client
NAME_BONUS_S = server_bonus
NAME_BONUS_C = client_bonus

CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME_S) $(NAME_C)

$(NAME_S) : server.c minitalk.h
	$(CC) $(CFLAGS) server.c 

