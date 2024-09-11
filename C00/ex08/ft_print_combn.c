/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:32:32 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 11:39:15 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	print_array(int *comb, int len)
{
	int		i;
	bool	is_last_comb;
	char	num;

	i = 0;
	while (i < len - 1)
	{
		if (comb[i] >= comb[i + 1])
			return ;
		i++;
	}
	i = 0;
	is_last_comb = false;
	while (i < len)
	{
		num = comb[i] + '0';
		write(1, &num, 1);
		if (i == 0 && comb[i] == 10 - len)
			is_last_comb = true;
		if (!is_last_comb && i == len - 1)
			write(1, ", ", 2);
		i++;
	}
}



void	ft_print_combn(int n)
{
	int	comb[10];
	int	i;

	i = -1;
	if (n < 1 || n >= 10)
		return ;
	while (i++ < n)
		comb[i] = i;
	while (comb[0] < 10 - n + 1)
	{
		print_array(comb, n);
		comb[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (comb[i] > 9)
			{
				comb[i - 1]++;
				comb[i] = 0;
			}
			i--;
		}
	}
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }



