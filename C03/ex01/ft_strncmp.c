/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:46:50 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/13 11:55:30 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "I want to go outside";
// 	char	s2[] = "I want to go";
// 	int		n = 9;
// 	int		result;

// 	result = ft_strncmp(s1, s2, n);
// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("n: %d\n", n);
// 	printf("Result: %d\n", result);
// 	return (0);
// }