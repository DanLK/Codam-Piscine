/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 10:04:30 by dloustal       #+#    #+#                */
/*   Updated: 2024/09/04 10:04:32 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

bool	is_space(char c);

int		valid_base_len(char *base);

bool	is_digit(char c, char *base);

int		find_nbr_len(int nb, int base_len);

char	*char_to_string(char c);

int	get_index(char c, char	*base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	to_decimal(char *nbr, char *base_from, int b_len)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (is_digit(*nbr, base_from))
	{
		nb = nb * b_len + (get_index(*nbr, base_from));
		nbr++;
	}
	return (nb * sign);
}

char	*str_cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*makenbr_base(char *result, int nb, char *base, int base_len)
{
	long	n;
	int		i;

	n = nb;
	i = 0;
	if (n < 0)
	{
		result = str_cat(result, "-");
		n = -n;
	}
	if (n < base_len)
	{
		result = str_cat(result, char_to_string(base[n]));
	}
	else
	{
		makenbr_base(result, n / base_len, base, base_len);
		makenbr_base(result, n % base_len, base, base_len);
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		b_to_len;
	int		b_from_len;
	int		result_len;
	char	*result;

	b_to_len = valid_base_len(base_to);
	b_from_len = valid_base_len(base_from);
	if (b_from_len == 0 || b_to_len == 0)
		return (NULL);
	nb = to_decimal(nbr, base_from, b_from_len);
	result_len = find_nbr_len(nb, b_to_len);
	if (nb < 0)
		result_len++;
	result = (char *)malloc(result_len * sizeof(char));
	if (result == NULL)
		return (result);
	result = makenbr_base(result, nb, base_to, b_to_len);
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	nbr[] = "--+-101010";

	printf("%s\n", ft_convert_base(nbr, "01", "10"));
	return (0);
}