/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:46:36 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/13 11:50:06 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "a";
// 	char	s2[] = "a";

// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("Result: %d\n", ft_strcmp(s1, s2));
// 	return (0);
// }
