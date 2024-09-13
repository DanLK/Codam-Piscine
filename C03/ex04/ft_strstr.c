/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/27 10:47:51 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/27 10:47:54 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	aux_check_substring(char *str, char *to_find, int i, int len)
{
	int		j;
	char	c1;
	char	c2;

	j = 0;
	c1 = str[i];
	c2 = to_find[j];
	while (j < len && c1 == c2)
	{
		j++;
		c1 = str[i + j];
		c2 = to_find[j];
	}
	return (j);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		len;
	int		i;
	int		j;

	len = str_len(to_find);
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = aux_check_substring(str, to_find, i, len);
			if (j == len)
				return (str + i);
			else
				i += j - 1;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "axybabaaxyaazgagf";
// 	char	to_find[] = "gf";

// 	printf("%s\n", ft_strstr(str, to_find));
// 	return (0);
// }
