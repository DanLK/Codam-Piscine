/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_fibonacci.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 11:43:40 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/03 11:43:42 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	while(i < 15)
// 	{
// 		printf("%d, ",ft_fibonacci(i));
// 		i++;
// 	}
// 	printf("%d\n",ft_fibonacci(i));
// 	return (0);
// }
