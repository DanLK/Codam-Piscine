/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_params.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/30 10:02:45 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/30 10:02:48 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	string_compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

char	**sort_string_vector(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			if (string_compare(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char**argv)
{
	int	i;
	int	j;

	sort_string_vector(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
