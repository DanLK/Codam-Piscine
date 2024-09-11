/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:42:15 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 12:22:43 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "How long am I?";
// 	printf("\"%s\": %d\n", str, ft_strlen(str));
// 	return (0);
// }