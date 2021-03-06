#include "push_swap.h"
#include <stdio.h>

t_list	*init_new_node(long long data)
{
	t_list	*newnode;
	printf("%lld init : ", data);
	newnode = (t_list *)malloc(sizeof(*newnode));
	if (!newnode)
		return (NULL);
	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
	return (newnode);
}

void	stack_push_top(t_stack *stack_info, t_list *node)
{
	if (node)
	{
		if (stack_info->top)
		{
			node->next = stack_info->top;
			(stack_info->top)->prev = node;
			stack_info->top = node;
		}
		else
		{
			stack_info->top = node;
			stack_info->bottom = node;
		}
		(stack_info->size)++;
	}
}

void	stack_push_bottom(t_stack *stack_info, t_list *new)
{
	t_list	*bottom;

	if (new)
	{
		//printf("1. push\n");
		if (!(stack_info->top))
		{
			//printf("2. push\n");
			stack_info->top = new;
			stack_info->bottom = new;
		}
		else
		{
			//printf("push\n");
			//printf("3. push\n");
			bottom = stack_info->bottom;
			new->prev = bottom;
			bottom->next = new;
			stack_info->bottom = new;
		}
	}
	(stack_info->size)++;
	printf("%lld push : ", stack_info->bottom->data);
	printf("%d size\n", stack_info->size);
}

t_list	*stack_pop_top(t_stack *stack_info)
{
	t_list *cur;

	if (stack_info->top)
	{
		if (stack_info->top->next != NULL)
		{
			cur = stack_info->top;
			(cur->next)->prev = NULL;
			stack_info->top = cur->next;
			cur->next = NULL;
		}
		else
		{
			cur = stack_info->top;
			stack_info->top = NULL;
			stack_info->bottom = NULL;
		}
		(stack_info->size)--;
		printf("%lld pop : ", cur->data);
		printf("%d size\n", stack_info->size);
		//free(cur);
		// 더이상 스택에 데이터 들어올 일 없으면 스택도 프리해줘야 함
		return (cur);
	}
	else
		return (NULL);
}