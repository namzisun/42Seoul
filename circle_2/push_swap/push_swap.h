#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_node
{
	long long		data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

void	error_handler(int error_num);
t_node	*ft_new_node(long long data);
t_node	*ft_stack_bottom(t_node *lst);
void	ft_push_bottom(t_stack *stack_info, t_node **stack, t_node *new);

#endif