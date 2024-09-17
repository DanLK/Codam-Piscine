/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_range.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 14:37:25 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/03 14:37:26 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	range[0] = (int *)malloc(size * sizeof(int));
	if (range[0] == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	**range;
// 	int	result;
// 	int	i;

// 	range = (int**)malloc(sizeof(int*));
// 	if (range == NULL)
// 		printf("Allocation error");
// 	result = ft_ultimate_range(range, -5, 5);
// 	printf("Length of the array: %d\n", result);
// 	i = 0;
// 	while (i < result)
// 	{
// 		printf("%d\n", range[0][i]);
// 		i++;
// 	}
// 	return (0);
// }
