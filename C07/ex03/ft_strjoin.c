/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:32:22 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/17 14:26:06 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_length(int size, char **strs)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*str_cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		tot_len;
	int		i;

	if (size == 0)
		result = (char *)malloc(sizeof(char));
	else
	{
		tot_len = total_length(size, strs) + str_len(sep) * (size - 1);
		result = (char *)malloc((tot_len + 1) * sizeof(char));
		if (result == NULL)
			return (result);
		i = 0;
		while (i < size - 1)
		{
			result = str_cat(result, strs[i]);
			result = str_cat(result, sep);
			i++;
		}
		result = str_cat(result, strs[i]);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"umbrella", "sombrilla", "paraplu"};

 	printf("%s\n", ft_strjoin(3, strs, "-----"));
 	return (0);
}