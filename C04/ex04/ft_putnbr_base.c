/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_base.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/28 15:41:56 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/28 15:41:59 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || base[i] > '~')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	n = nbr;
	len = valid_base_len(base);
	if (len == 0)
		return ;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n < len)
		write(1, &base[n], 1);
	else
	{
		ft_putnbr_base((n / len), base);
		ft_putnbr_base((n % len), base);
	}
}

// int	main(void)
// {
// 	char	base[] = "0";
// 	int		nbr = 0;

// 	ft_putnbr_base(nbr, base);
// 	return (0);
// }
