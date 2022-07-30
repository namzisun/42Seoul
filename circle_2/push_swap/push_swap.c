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

int	check_duplicate(long long data, t_stack *stack_info)
{
	t_list	*cur;
	int		flag;

	cur = stack_info->top;
	flag = 0;
	while (cur)
	{
		if (cur->data == data)
		{
			flag = 1;
			break;
		}
		cur = cur->next;
	}
	return (flag);
}

void	check_str_argument(char *argv, t_stack *stack_a_info)
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
		if (check_duplicate(ft_atol(split[i]), stack_a_info))
			error_handler(4);
		new_node = init_new_node(ft_atol(split[i]));
		if (!new_node)
			error_handler(3);
		//printf("%lld\n", ft_atol(split[i]));
		stack_push_bottom(stack_a_info, new_node);
		i++;
	}
	ft_free(split, i);
}

void	check_char_argument(char *argv, t_stack *stack_a_info)
{
	t_list	*new_node;

	if (!ft_atol(argv))
		error_handler(1);
	if (check_duplicate(ft_atol(argv), stack_a_info))
		error_handler(4);
	new_node = init_new_node(ft_atol(argv));
	if (!new_node)
		error_handler(3);
	//printf("%lld\n", ft_atol(argv));
	stack_push_bottom(stack_a_info, new_node);
}

void	make_stack_a(t_stack *stack_a_info, char **argv)
{
	int		i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
			error_handler(1);
		else if (argv[i][1] != '\0')
			check_str_argument(argv[i++], stack_a_info);
		else
			check_char_argument(argv[i++], stack_a_info);
	}
}

int	main(int argc, char **argv)
{
//	t_list 	**stack_a;
//	t_list 	**stack_b;
	t_stack	*stack_a_info;
	t_stack	*stack_b_info;

	if (argc < 2 || !argv[1][0])
		error_handler(0);
//	stack_a = init_stack();
//	stack_b = init_stack();
	stack_a_info = init_stack_info();
	stack_b_info = init_stack_info();
	make_stack_a(stack_a_info, argv);
	//printf("%lld\n", (*stack_a)->data);
//	free(stack_b);

// 디버깅용도
/*	pb(stack_a_info, stack_b_info);
	t_list *cur = stack_b_info->top;
	while (cur)
	{
		printf("%lld, ",cur->data);
		cur = cur->next;
	}*/
	free(stack_b_info);
	return (0);
}