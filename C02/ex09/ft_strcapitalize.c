/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/22 12:25:25 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/22 12:25:31 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

bool	is_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	char		c;
	int			i;
	bool		is_new_word;
	const char	transform = 'a' - 'A';

	i = 0;
	c = str[i];
	is_new_word = true;
	while (c != '\0')
	{
		if (is_new_word && c >= 'a' && c <= 'z')
		{
			str[i] = str[i] - transform;
			is_new_word = false;
		}
		if (!is_new_word && c >= 'A' && c <= 'Z')
			str[i] = str[i] + transform;
		if (is_alphanumeric(c))
			is_new_word = false;
		else
			is_new_word = true;
		i++;
		c = str[i];
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	phrase1[] = "salut, com\tment tu vas ?";
// 	char	phrase2[] = " 42motsquar?ante-deux;cinquante+et+un";
// 	char	*result;

// 	printf("%s\n", phrase1);
// 	result = ft_strcapitalize(phrase1);
// 	printf("%s\n", result);
// 	printf("%s\n", phrase2);
// 	result = ft_strcapitalize(phrase2);
// 	printf("%s\n", result);	
// }