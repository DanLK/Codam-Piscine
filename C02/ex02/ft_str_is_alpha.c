/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:10:29 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 12:48:56 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
			return (0);
		str++;
		c = *str;
	}
	return (1);
}

// #include <stdio.h>

// int	main(int argc, char**argv)
// {
// 	if (argc != 2)
// 	{	
// 		printf("Please provide exactly one argument");
// 		return (0);
// 	}
// 	printf("%d\n", ft_str_is_alpha(argv[1]));
// 	return (0);	
// }