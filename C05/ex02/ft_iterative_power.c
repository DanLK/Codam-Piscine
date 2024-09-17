/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 11:43:15 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/03 11:43:17 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		nb *= res;
		power--;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(0, 9));
// 	return (0);
// }
