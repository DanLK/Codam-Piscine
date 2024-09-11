/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_printable.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/22 10:17:54 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/22 10:17:57 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	unsigned char	c;

	c = *str;
	while (c)
	{
		if (c < ' ' || c == 127)
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
// 	char	*random = "eehufu345€€€0843_@(#4 ";
// 	char	*numbers = "7483509433";
// 	char	*empty = "";
// 	char	*non_printable = "Hello\nHell\to";
// 	int	n;

// 	n = ft_str_is_printable(alpha);
// 	printf("\"%s\": %d\n", alpha, n);
// 	n = ft_str_is_printable(caps);
// 	printf("\"%s\": %d\n", caps, n);
// 	n = ft_str_is_printable(random);
// 	printf("\"%s\": %d\n", random, n);
// 	n = ft_str_is_printable(numbers);
// 	printf("\"%s\": %d\n", numbers, n);
// 	n = ft_str_is_printable(empty);
// 	printf("\"%s\": %d\n", empty, n);
// 	n = ft_str_is_printable(non_printable);
// 	printf("\"%s\": %d\n", non_printable, n);
// }