/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/28 13:37:41 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/28 13:37:48 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

bool	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	while (is_sign(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_digit(*str))
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (nb * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "   \t  -+---2147483647 05968543";

// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }