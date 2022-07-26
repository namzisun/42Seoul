# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 15:57:20 by jnam              #+#    #+#              #
#    Updated: 2022/07/26 17:34:10 by jnam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a

SRCS = \
ft_atol.c ft_split.c ft_putstr.c \

OBJS = $(SRCS:.c=.o)
OBJECTS = $(OBJS)

%o : %c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)


all : $(NAME)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)
re :	fclean all

.PHONY : all clean fclean re
