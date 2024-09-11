/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlowcase.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/22 12:14:31 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/22 12:14:34 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char		c;
	int			i;
	const char	to_lwr = 'A' - 'a';

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		if (c >= 'A' && c <= 'Z')
			str[i] -= to_lwr;
		i++;
		c = str[i];
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	alpha[] = "thesearelowercaseletters";
// 	char	caps[] = "SOMECAPS";
// 	char	random[] = "a\tBiT OF everyTHING 7328945$#$@#$";
// 	// char	numbers[] = "7483509433";
// 	char	empty[] = "";
// 	// char	non_printable[] = "Hello\nHell\to";
// 	char	*result;

// 	printf("%s: ", alpha);
// 	result = ft_strlowcase(alpha);
// 	printf("%s\n", alpha);
// 	printf("%s: ", caps);
// 	result = ft_strlowcase(caps);
// 	printf("%s\n", caps);
// 	printf("%s: ", random);
// 	result = ft_strlowcase(random);
// 	printf("%s\n", random);
// 	printf("%s: ", empty);
// 	result = ft_strlowcase(empty);
// 	printf("%s\n", empty);
// 	return (0);
// }