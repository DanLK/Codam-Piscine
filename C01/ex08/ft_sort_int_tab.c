/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:55:14 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 12:27:34 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - j - 1)
		{
			temp = tab[i];
			if (temp > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	arr[] = {0, 100, -2, 2, 4, 5, 1, 800};
// 	int	i;
// 	int	size;

// 	size = 8;
// 	ft_sort_int_tab(arr, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }