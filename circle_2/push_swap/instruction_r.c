#include "push_swap.h"

void	ra(t_stack *stack_info)
{
	t_list	*old_top;
	t_list	*new_top;

	old_top = NULL;
	new_top = NULL;
	if (stack_info->size == 1)
		return ;
	else if (stack_info->size == 2)
		sa(stack_info);
	else{
		old_top = stack_info->top;
		new_top = old_top->next;
		new_top->prev = NULL;
		stack_info->top = old_top->next;
		old_top->prev = stack_info->bottom;
		old_top->next = NULL;
		(stack_info->bottom)->next = old_top;
		stack_info->bottom = old_top;
	}
	ft_putstr("ra\n");
}

void	rb(t_stack *stack_info)
{
	t_list	*old_top;
	t_list	*new_top;

	old_top = NULL;
	new_top = NULL;
	if (stack_info->size == 1)
		return ;
	else if (stack_info->size == 2)
		sb(stack_info);
	else{
		old_top = stack_info->top;
		new_top = old_top->next;
		new_top->prev = NULL;
		stack_info->top = old_top->next;
		old_top->prev = stack_info->bottom;
		old_top->next = NULL;
		(stack_info->bottom)->next = old_top;
		stack_info->bottom = old_top;
	}
	ft_putstr("rb\n");
}

void	rr(t_stack *stack_a_info, t_stack *stack_b_info)
{
	ra(stack_a_info);
	rb(stack_b_info);
	ft_putstr("rr\n");
}