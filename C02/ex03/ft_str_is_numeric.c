/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/21 16:56:21 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/22 09:42:24 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	c;

	c = *str;
	while (c)
	{
		if (c < '0' || c > '9')
			return (0);
		str++;
		c = *str;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*alpha = "theseareletters";
// 	char	*caps = "SOMECAPS";
// 	char	*random = "eehufu3450843_@(#4 ";
// 	char	*numbers = "7483509433";
// 	char	*empty = "";
// 	int	n;

// 	n = ft_str_is_numeric(alpha);
// 	printf("\"%s\": %d\n", alpha, n);
// 	n = ft_str_is_numeric(caps);
// 	printf("\"%s\": %d\n", caps, n);
// 	n = ft_str_is_numeric(random);
// 	printf("\"%s\": %d\n", random, n);
// 	n = ft_str_is_numeric(numbers);
// 	printf("\"%s\": %d\n", numbers, n);
// 	n = ft_str_is_numeric(empty);
// 	printf("\"%s\": %d\n", empty, n); 	
// }