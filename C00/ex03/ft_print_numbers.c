/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                  :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:55:46 by dloustal          #+#    #+#             */
/*   Updated: 2024/08/20 13:45:52 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	dig;

	dig = '0';
	while (dig <= '9')
	{
		write(1, &dig, 1);
		dig++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }

