/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:10:46 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/17 14:08:46 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = - (n);
	}
	if (n < 10)
	{
		c = '0' + n;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	nb = 2147483647;

// 	ft_putnbr(nb);
// 	return (0);
// }