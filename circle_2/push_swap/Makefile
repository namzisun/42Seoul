NAME = pushswap
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = \
push_swap.c error_handler.c stack.c initial.c \
instruction_ps.c instruction_r.c instruction_rr.c \

DEFS = push_swap.h
OBJ = $(SRC:.c=.o)
INC_LINK = -I.

all : $(NAME)

$(NAME) : libft
		$(CC) $(FLAGS) libft/libft.a $(SRC) -o pushswap

%.o: %.c
	$(CC) $(FLAGS) $(INC_LINK) -c $< -o $(<:.c=.o)


libft :
	$(MAKE) -C ./libft all
clean :
	$(MAKE) -C ./libft fclean
	rm -rf $(OBJ)
fclean : clean	
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re libft