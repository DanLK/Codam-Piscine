/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:10:29 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 12:37:39 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src = "Copy me";
// 	char	dest[3];

// 	printf("src: \"%s\"\n", src);
// 	*dest = *ft_strcpy(dest, src);
// 	printf("dest: \"%s\"\n", dest);
// 	return (0);
// }