/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/27 16:57:09 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/27 16:57:12 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello";

// 	printf("Len(%s): %d\n", str, ft_strlen(str));
// 	return (0);
// }
