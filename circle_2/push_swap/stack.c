#include "push_swap.h"

t_node	*ft_new_node(long long data)
{
	t_node	*newnode;

	newnode = (t_node *)malloc(sizeof(*newnode));
	if (!newnode)
		return (NULL);
	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
	return (newnode);
}

t_node	*ft_stack_bottom(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_push_bottom(t_stack *stack_info, t_node **stack, t_node *new)
{
	t_node	*bottom;

	if (stack && new)
	{
		if (!(*stack))
		{
			*stack = new;
			stack_info->top = new;
			stack_info->bottom = new;
		}
		else if (*stack)
		{
			bottom = ft_stack_bottom(*stack);
			new->prev = bottom;
			bottom->next = new;
			stack_info->bottom = new;
		}
	}
}