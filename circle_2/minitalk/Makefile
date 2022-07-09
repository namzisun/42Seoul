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

all : $(NAME_S) $(NAME_C)
$(NAME_S) : $(OBJ) libft
		cp libft/libft.a ./$(NAME)
		ar rsc $(NAME) $(OBJ)
$(NAME_C) : 

bonus: $(NAME_BONUS_S) $(NAME_BONUS_C)
$(NAME_BONUS_S) : 
$(NAME_BONUS_C) : 

libft :
	$(MAKE) -C ./libft all
clean :
	$(MAKE) -C ./libft fclean
	rm -rf $(OBJ)
fclean : clean	
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re libft
