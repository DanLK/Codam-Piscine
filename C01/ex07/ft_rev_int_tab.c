/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:24:32 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 12:25:35 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + (size - i - 1));
		*(tab + (size - i - 1)) = temp;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	array[] = {1, 2, 3, 4};
// 	int	size;
// 	int	i;

// 	i = 0;
// 	size = 4;
// 	ft_rev_int_tab(array, size);
// 	while (i < size - 1)
// 	{
// 		printf("%d, ", array[i]);
// 		i++;
// 	}
// 	printf("%d", array[i]);
// 	return (0);
// }