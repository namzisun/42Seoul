# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnam <jnam@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 01:53:05 by jnam              #+#    #+#              #
#    Updated: 2022/04/28 01:56:27 by jnam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CM = cc

FLAG = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c

CNVRT = $(SRC:.c=.o)

INCLUDE = ft_printf.h

all = $(NAME)

$(NAME) : $(CNVRT) $(INCLUDE)
	@ar rcs $(NAME) $CNVRT) $(INCLUDE)

%.o : %.c $(INCLUDE)
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(CNVRT)

fclean: clean
	@rm -rf $(NAME)

re: fclear all
