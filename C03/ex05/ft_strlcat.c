/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/27 10:48:07 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/27 10:48:10 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;

	i = 0;
	len_d = str_len(dest);
	len_s = str_len(src);
	while (src[i] != '\0' && i < (size - len_d - 1) && len_d < size)
	{
		dest[len_d + i] = src[i];
		i ++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = " world!";
// 	char	dest[12] = "hello";

// 	printf("dest: %s\nlen: %d\n", dest, ft_strlcat(dest, src, 13));
// 	return (0);
// }
