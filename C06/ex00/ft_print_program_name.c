/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_program_name.c                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/30 10:01:54 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/30 10:01:57 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(__attribute__ ((unused))int argc, char**argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
