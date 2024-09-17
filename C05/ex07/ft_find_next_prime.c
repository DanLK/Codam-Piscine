/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_find_next_prime.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 11:44:20 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/03 11:44:23 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;
	int	limit;

	if (ft_is_prime(nb) == 1)
		return (nb);
	limit = nb * 2 + 1;
	next = nb + 1;
	while (next < limit)
	{
		if (ft_is_prime(next))
			return (next);
		next++;
	}
	return (2);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(30));
// 	return (0);
// }
