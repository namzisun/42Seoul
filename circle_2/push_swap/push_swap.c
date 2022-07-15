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

void	check_str_argument(char *argv, t_node **stack_a, t_stack *stack_a_info)
{
	char		**split;
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
		if (!ft_new_node(ft_atol(split[i])))
			error_handler(3);
		printf("%lld\n", ft_atol(split[i]));
		ft_push_bottom(stack_a_info, stack_a, ft_new_node(ft_atol(split[i])));
		i++;
	}
	ft_free(split, i);
}

void	check_char_argument(char *argv, t_node **stack_a, t_stack *stack_a_info)
{
	if (!ft_atol(argv))
		error_handler(1);
	if (!ft_new_node(ft_atol(argv)))
		error_handler(3);
	printf("%lld\n", ft_atol(argv));
	ft_push_bottom(stack_a_info, stack_a, ft_new_node(ft_atol(argv)));
}

int	main(int argc, char **argv)
{
	int	i;
	t_node	**stack_a;
//	t_node	**stack_b;
	t_stack	*stack_a_info;
//	t_stack *stack_b_info;
	
	stack_a = NULL;
	stack_a_info = NULL;
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
	return 0;
}