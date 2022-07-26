#include "push_swap.h"

void	pa(t_stack *stack_a_info, t_stack *stack_b_info)
{
	t_list	*cur;

	cur = stack_pop_top(stack_b_info);
	stack_push_top(stack_a_info, cur);
	ft_putstr("pa\n");
}

void	pb(t_stack *stack_a_info, t_stack *stack_b_info)
{
	t_list	*cur;

	cur = stack_pop_top(stack_a_info);
	stack_push_top(stack_b_info, cur);
	ft_putstr("pb\n");
}

void	sa(t_stack *stack_info)
{
	t_list	*new_top;
	t_list	*old_top;

	if (stack_info->size == 1)
		return ;
	else if (stack_info->size == 2)
	{
		old_top = stack_pop_top(stack_info);
		stack_push_bottom(stack_info, old_top);
	}
	else
	{
		new_top = (stack_info->top)->next;
		old_top = stack_info->top;
		old_top->next = new_top->next;
		(old_top->next)->prev = old_top;
		new_top->prev = NULL;
		new_top->next = old_top;
		stack_info->top = new_top;
	}
	ft_putstr("sa\n");
}

void	sb(t_stack *stack_info)
{
	t_list	*new_top;
	t_list	*old_top;

	if (stack_info->size == 1)
		return ;
	else if (stack_info->size == 2)
	{
		old_top = stack_pop_top(stack_info);
		stack_push_bottom(stack_info, old_top);
	}
	else
	{
		new_top = (stack_info->top)->next;
		old_top = stack_info->top;
		old_top->next = new_top->next;
		(old_top->next)->prev = old_top;
		new_top->prev = NULL;
		new_top->next = old_top;
		stack_info->top = new_top;
	}
	ft_putstr("sb\n");
}

void	ss(t_stack *stack_a_info, t_stack *stack_b_info)
{
	sa(stack_a_info);
	sb(stack_b_info);
	ft_putstr("ss\n");
}