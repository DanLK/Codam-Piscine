/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strupcase.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/22 10:27:33 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/22 10:27:35 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	char		c;
	int			i;
	const char	to_upr = 'a' - 'A';

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
			str[i] -= to_upr;
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
// 	char	random[] = "aBiT OF everyTHING 7328945$#$@#$";
// 	// char	numbers[] = "7483509433";
// 	char	empty[] = "";
// 	// char	non_printable[] = "Hello\nHell\to";
// 	char	*result;

// 	printf("%s: ", alpha);
// 	result = ft_strupcase(alpha);
// 	printf("%s\n", alpha);
// 	printf("%s: ", caps);
// 	result = ft_strupcase(caps);
// 	printf("%s\n", caps);
// 	printf("%s: ", random);
// 	result = ft_strupcase(random);
// 	printf("%s\n", random);
// 	printf("%s: ", empty);
// 	result = ft_strupcase(empty);
// 	printf("%s\n", empty);
// 	return (0);
// }