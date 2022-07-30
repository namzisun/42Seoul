#include "push_swap.h"

void	rra(t_stack *stack_info, int flag)
{
	t_list	*old_bottom;
	t_list	*new_bottom;

	old_bottom = NULL;
	new_bottom = NULL;
	if (stack_info->size == 1)
		return ;
	else if (stack_info->size == 2)
		sa(stack_info, 1);
	else
	{
		old_bottom = stack_info->bottom;
		new_bottom = old_bottom->prev;
		stack_info->bottom = new_bottom;
		old_bottom->prev = NULL;
		old_bottom->next = stack_info->top;
		new_bottom->next = NULL;
		(stack_info->top)->prev = old_bottom;
		stack_info->top = old_bottom;
	}
	if (flag == 0)
		ft_putstr("rra\n");
}

void	rrb(t_stack *stack_info, int flag)
{
	t_list	*old_bottom;
	t_list	*new_bottom;

	old_bottom = NULL;
	new_bottom = NULL;
	if (stack_info->size == 1)
		return ;
	else if (stack_info->size == 2)
		sb(stack_info, 1);
	else
	{
		old_bottom = stack_info->bottom;
		new_bottom = old_bottom->prev;
		stack_info->bottom = new_bottom;
		old_bottom->prev = NULL;
		old_bottom->next = stack_info->top;
		new_bottom->next = NULL;
		(stack_info->top)->prev = old_bottom;
		stack_info->top = old_bottom;
	}
	if (flag == 0)
		ft_putstr("rrb\n");
}

void	rrr(t_stack *stack_a_info, t_stack *stack_b_info)
{
	rra(stack_a_info, 1);
	rrb(stack_b_info, 1);
	ft_putstr("rrr\n");
}