/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sqrt.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 11:43:52 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/03 11:43:54 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	i = 1;
	while (i <= nb / 2)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(24 * 24));
// 	return (0);
// }
