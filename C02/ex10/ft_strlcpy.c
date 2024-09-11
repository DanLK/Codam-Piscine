/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:29:14 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 13:12:47 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
		len_src++;
	}
	while (src[len_src])
		len_src++;
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (len_src);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello!";
// 	char	dest[13];
// 	unsigned int	size = 10;
// 	unsigned int	len;

// 	printf("src: %s\n", src);
// 	printf("size: %d\n", size);
// 	len = ft_strlcpy(dest, src, size);
// 	printf("dest: %s\n", dest);
// 	printf("len: %d\n", len);
// 	return (0);
// }