/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base2.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 11:41:54 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/04 11:41:56 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

int	valid_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
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

bool	is_digit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int	find_nbr_len(int nb, int base_len)
{
	int		nbr_len;
	long	n;

	n = nb;
	if (n < 0)
		n = -n;
	nbr_len = 1;
	while (nb > base_len)
	{
		nb /= base_len;
		nbr_len++;
	}
	return (nbr_len);
}

char	*char_to_string(char c)
{
	char	*result;

	result = malloc(sizeof(char));
	result[0] = c;
	return (result);
}
