/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:30:48 by ktong             #+#    #+#             */
/*   Updated: 2024/01/23 18:32:35 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

void	ft_print_numbers(void)
{
	char	chiffre;

	chiffre = 48;
	while (chiffre <= 57)
	{
		write(1, &chiffre, 1);
		chiffre++;
	}
}
