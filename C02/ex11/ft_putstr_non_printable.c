/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_non_printable.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/22 15:57:08 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/22 15:57:10 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			c;
	int				i;
	const char		hex[] = "0123456789abcdef";

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		if (c >= ' ' && c <= '~')
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &(hex[c / 16]), 1);
			write(1, &(hex[c % 16]), 1);
		}
		i++;
		c = str[i];
	}
}

// int	main(void)
// {
// 	char	str[] = "Coucou\ntu vas bien ?";

// 	ft_putstr_non_printable(str);
// 	return (0);
// }