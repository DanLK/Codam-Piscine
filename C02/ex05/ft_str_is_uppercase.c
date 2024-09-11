/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/22 10:13:05 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/22 10:13:13 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	char	c;

	c = *str;
	while (c)
	{
		if (c < 'A' || c > 'Z')
			return (0);
		str++;
		c = *str;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*alpha = "thesearelowercaseletters";
// 	char	*caps = "SOMECAPS";
// 	char	*random = "eehufu3450843_@(#4 ";
// 	char	*numbers = "7483509433";
// 	char	*empty = "";
// 	int	n;

// 	n = ft_str_is_uppercase(alpha);
// 	printf("\"%s\": %d\n", alpha, n);
// 	n = ft_str_is_uppercase(caps);
// 	printf("\"%s\": %d\n", caps, n);
// 	n = ft_str_is_uppercase(random);
// 	printf("\"%s\": %d\n", random, n);
// 	n = ft_str_is_uppercase(numbers);
// 	printf("\"%s\": %d\n", numbers, n);
// 	n = ft_str_is_uppercase(empty);
// 	printf("\"%s\": %d\n", empty, n); 	
// }