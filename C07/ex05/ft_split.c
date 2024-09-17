/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/05 15:02:05 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/05 15:02:08 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

bool	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_separator(str[i], charset))
				i++;
		}
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	return (i);
}

char	*create_and_copy(char *str, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(len * sizeof(char));
	while (len > 0)
	{
		word[i] = str[i];
		i++;
		len--;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		total_words;
	int		index_word;
	int		current_len;

	total_words = count_words(str, charset);
	result = malloc((total_words + 1) * sizeof(char *));
	if (result == NULL)
		return (result);
	index_word = 0;
	while (*str)
	{
		while (is_separator(*str, charset))
			str++;
		current_len = word_len(str, charset);
		result[index_word] = create_and_copy(str, current_len);
		str += current_len;
		index_word++;
	}
	result[total_words] = 0;
	return (result);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char	str[] = "----hi------hello-hoi-hola";
// 	char	charset[] = "-i";
// 	char	**result;
// 	int	i = 0;

// 	result = ft_split(str, charset);
// 	while(result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }