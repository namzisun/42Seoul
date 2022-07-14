#include "push_swap.h"

void	error_handler(int error_num)
{
	if (error_num == 0)
		ft_putstr("error : please put least 3 arguments.\n");
	else if (error_num == 1)
		ft_putstr("error : argument is not num.\n");
	else if (error_num == 2)
		ft_putstr("error : ft_split returns NULL.\n");
	else if (error_num == 3)
		ft_putstr("error : ft_lstnew returns NULL.\n");
	exit(1);
}