#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_list
{
	long long		data;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	int		size;
	t_list	*top;
	t_list	*bottom;
}	t_stack;

void	error_handler(int error_num);
t_list	*init_new_node(long long data);
void	stack_push_bottom(t_stack *stack_info, t_list **stack, t_list *new);
void	stack_pop_top(t_stack *stack_info, t_list **stack);
t_stack	*init_stack_info();
t_list	**init_stack();

#endif