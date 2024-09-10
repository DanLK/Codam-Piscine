/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                        :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:18:04 by dloustal          #+#    #+#             */
/*   Updated: 2024/08/20 13:40:21 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// #include <stdio.h>
// int	main(int argc, char**argv)
// {
// 	if (argc != 2)
// 		printf("Please enter exactly one argument");
// 	else if (argv[1][1])
// 		printf("Please enter exactly one character");
// 	else
// 		ft_putchar(argv[1][0]);
// 	return (0);
// }

