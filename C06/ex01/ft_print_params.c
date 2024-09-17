/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_params.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/30 10:02:11 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/30 10:02:15 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char**argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
