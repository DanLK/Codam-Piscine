/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 11:42:37 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/03 11:42:40 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb - 1;
	while (i > 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(4));
// 	return (0);
// }
