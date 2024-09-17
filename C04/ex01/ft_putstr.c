/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/27 17:02:59 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/27 17:03:01 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello";

// 	ft_putstr(str);
// 	return (0);
// }
