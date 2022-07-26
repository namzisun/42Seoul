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

t_stack	*init_stack_info();
t_list	**init_stack();

void	check_str_argument(char *argv, t_stack *stack_a_info);
void	check_char_argument(char *argv, t_stack *stack_a_info);
void	make_stack_a(t_stack *stack_a_info, char **argv);
void	ft_free(char **tab, int index);				// 얘는 수정하기

t_list	*init_new_node(long long data);
void	stack_push_top(t_stack *stack_info, t_list *node);
void	stack_push_bottom(t_stack *stack_info, t_list *new);
t_list	*stack_pop_top(t_stack *stack_info);

void	pa(t_stack *stack_a_info, t_stack *stack_b_info);
void	pb(t_stack *stack_a_info, t_stack *stack_b_info);
void	sa(t_stack *stack_info);
void	sb(t_stack *stack_info);
void	ss(t_stack *stack_a_info, t_stack *stack_b_info);
void	ra(t_stack *stack_info);
void	rb(t_stack *stack_info);
void	rr(t_stack *stack_a_info, t_stack *stack_b_info);
void	rra(t_stack *stack_info);
void	rrb(t_stack *stack_info);
void	rrr(t_stack *stack_a_info, t_stack *stack_b_info);

#endif