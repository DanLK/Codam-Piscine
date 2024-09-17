/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_range.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 12:10:54 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/03 12:10:56 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(size * sizeof(int));
	if (range == NULL)
		return (range);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*range;
// 	int	i;
// 	int	max = 5;
// 	int min = -3;

// 	range = ft_range(-3, 5);
// 	i = 0;
// 	while (i < (max - min))
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// 	return (0);
// }
