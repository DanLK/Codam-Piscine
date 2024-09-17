/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/02 15:36:38 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/02 15:36:42 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		slen;
	char	*dup;
	int		i;

	i = 0;
	slen = ft_strlen(src);
	dup = malloc((slen + 1) * sizeof(char));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>

int	main(void)
{
	char *s = "Chocolate cake";

	char *dup;
	dup = ft_strdup(s);
	printf("%s: %s\n", s, dup);
	return (0);
}