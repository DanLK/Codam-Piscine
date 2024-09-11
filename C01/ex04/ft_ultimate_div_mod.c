/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:13:50 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/11 12:08:13 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 2;
// 	printf("a: %d\nb: %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a: %d\nb: %d\n", a, b);
// 	return (0);
// }
