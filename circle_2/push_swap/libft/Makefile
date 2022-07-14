# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnam <jnam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 15:57:20 by jnam              #+#    #+#              #
#    Updated: 2022/07/14 16:58:22 by jnam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a

SRCS = \
ft_atol.c ft_split.c ft_putstr.c \
ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

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
