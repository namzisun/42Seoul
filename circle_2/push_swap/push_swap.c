#include "push_swap.h"
#include <stdio.h>
void	ft_free(char **tab, int index)
{
	int	i;

	i = 0;
	while (i < index)
		free(tab[i++]);
	free(tab);
}

void	check_str_argument(char *argv, t_list **stack_a, t_stack *stack_a_info)
{
	char		**split;
	t_list		*new_node;
	int			i;

	//split = (char **)malloc(sizeof(char *) * (ft_len(argv, ' ') + 1));
	split = ft_split(argv, ' ');
	if (!split)
		error_handler(2);
	i = 0;
	while (split[i])
	{
		if (!ft_atol(split[i]))
			error_handler(1);
		new_node = init_new_node(ft_atol(split[i]));
		if (!new_node)
			error_handler(3);
		//printf("%lld\n", ft_atol(split[i]));
		stack_push_bottom(stack_a_info, stack_a, new_node);
		i++;
	}
	ft_free(split, i);
}

void	check_char_argument(char *argv, t_list **stack_a, t_stack *stack_a_info)
{
	t_list	*new_node;

	if (!ft_atol(argv))
		error_handler(1);
	new_node = init_new_node(ft_atol(argv));
	if (!new_node)
		error_handler(3);
	//printf("%lld\n", ft_atol(argv));
	stack_push_bottom(stack_a_info, stack_a, new_node);
}



int	main(int argc, char **argv)
{
	int	i;
	t_list	**stack_a;
//	t_list	**stack_b;
	t_stack	*stack_a_info;
//	t_stack *stack_b_info;
	
	stack_a = (t_list **)malloc(sizeof(t_list *));
	stack_a_info = (t_stack *)malloc(sizeof(t_stack));
	stack_a_info->top = NULL;
	stack_a_info->bottom = NULL;
	stack_a_info->size = 0;
	if (argc < 2)
		error_handler(0);
	i = 1;
	while (argv[i])
	{
		if (argv[i][1] != '\0')
			check_str_argument(argv[i++], stack_a, stack_a_info);
		else
			check_char_argument(argv[i++], stack_a, stack_a_info);
	}
	stack_pop_top(stack_a_info, stack_a);
	stack_pop_top(stack_a_info, stack_a);
	stack_pop_top(stack_a_info, stack_a);
	return 0;
}