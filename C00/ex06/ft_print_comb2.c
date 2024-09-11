/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:08:25 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/10 13:39:06 by dloustal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	aux_write_int(int a)
{
	char	c;

	if (a < 10)
	{
		c = a + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		aux_write_int(a / 10);
		aux_write_int(a % 10);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			aux_write_int(a);
			write(1, " ", 1);
			aux_write_int(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

