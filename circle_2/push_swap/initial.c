#include "push_swap.h"

t_stack	*init_stack_info()
{
	t_stack	*stack_info;

	stack_info = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_info)
		exit (1);
		// 기존에 생성된 존재들 모두 free하고 종료
	stack_info->top = NULL;
	stack_info->bottom = NULL;
	stack_info->size = 0;
	return (stack_info);
}

t_list	**init_stack()
{
	t_list	**stack;

	stack = (t_list **)malloc(sizeof(t_list *));
	if(!stack)
		exit (1);
		//기존에 생성된 존재들 모두 free하고 종료
	return (stack);
}
