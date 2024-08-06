/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:57:00 by ktong             #+#    #+#             */
/*   Updated: 2024/01/25 09:44:19 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c <= 122)
	{
		write (1, &c, 1);
		c++;
	}
}
