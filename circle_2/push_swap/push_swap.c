#include "push_swap.h"
#include <stdio.h>

void	check_str_argument(char *argv, t_list **stack_a)
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
		if (!ft_lstnew(&(ft_atol(split[i]))))
			error_handler(3);
		printf("%lld\n", ft_atol(split[i]));
		ft_lstadd_back(stack_a, ft_lstnew(ft_atol(split[i])));
		i++;
	}
	ft_free(split, i);
}

void	check_str_argument(char argv, t_list **stack_a)
{
	if (!ft_atol(argv))
		error_handler(1);
	if (!ft_lstnew(ft_atol(argv)))
		error_handler(3);
	printf("%lld\n", ft_atol(argv));
	ft_lstadd_back(stack_a, ft_lstnew(ft_atol(argv)));
}

int	main(int argc, char **argv)
{
	int	i;
	t_list	**stack_a;
	t_list	**stack_b;
	
	if (argc < 3)
		error_handler(0);
	i = 2;
	while (argv[i])
	{
		if (argv[i][1] != '\0')
			check_str_argument(argv[i++], stack_a);
		else
			check_char_argument(argv[i++], stack_a);
	}
	return 0;
}