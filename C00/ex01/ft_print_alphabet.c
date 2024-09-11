/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloustalot <dloustalot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:51:36 by dloustal          #+#    #+#             */
/*   Updated: 2024/09/10 13:29:14 by dloustalot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}


// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }

