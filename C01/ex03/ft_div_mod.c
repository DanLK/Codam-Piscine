/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:55:49 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 12:00:54 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 13;
// 	b = 6;
// 	printf("a: %d\nb: %d\n", a, b);
// 	ft_div_mod(a, b, &a, &b);
// 	printf("Div: %d \nMod: %d\n", a, b);
// 	return (0);
// }
