#include "push_swap.h"
#include <stdio.h>

void	ft_sort_two(t_stack *stack_a_info)
{
	if ((stack_a_info->top)->data < (stack_a_info->bottom)->data)
		sa(stack_a_info, 0);
}

void	ft_sort_three_casebycase(t_stack *stack_info, long long min, long long max)
{
	if ((stack_info->top)->data == min)
	{
		if ((stack_info->bottom)->data != max)
		{
			sa(stack_info, 0);
			ra(stack_info, 0);
		}
	}
	else if ((stack_info->top)->data == max)
	{
		if ((stack_info->bottom)->data == min)
		{
			sa(stack_info, 0);
			rra(stack_info, 0);
		}
		else
			ra(stack_info, 0);
	}
	else
	{
		if ((stack_info->bottom)->data == min)
			rra(stack_info, 0);
		else
			sa(stack_info, 0);
	}
}

void	ft_sort_three(t_stack *stack_a_info)
{
	long long	min;
	long long	max;
	t_list		*cur;

	min = (stack_a_info->top)->data;
	max = (stack_a_info->top)->data;
	cur = stack_a_info->top;
	while (cur)
	{
		if (cur->data < min)
			min = cur->data;
		if (cur->data > max)
			max = cur->data;
		cur = cur->next;
	}
	ft_sort_three_casebycase(stack_a_info, min, max);
}

void	ft_sort_more(t_stack *stack_a_info, t_stack *stack_b_info)
{
}

void	ft_sort(t_stack *stack_a_info, t_stack *stack_b_info)
{
	if (stack_a_info->size == 1)
		return ;
	else if (stack_a_info->size == 2)
		ft_sort_two(stack_a_info);
	else if (stack_a_info->size == 3)
		ft_sort_three(stack_a_info);
	else
		ft_sort_more(stack_a_info, stack_b_info);
}