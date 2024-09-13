/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:47:06 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/13 11:58:09 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		l1;
	int		i;

	l1 = str_len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[l1 + i] = src[i];
		i++;
	}
	dest[l1 + i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = " koffie ;)";
// 	char dest[15] = "Lekker";

// 	printf("%s\n", ft_strcat(dest, str));
// 	return (0);
// }
