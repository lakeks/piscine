/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:14:27 by ktong             #+#    #+#             */
/*   Updated: 2024/01/23 19:41:27 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/

void	ft_print_reverse_alphabet(void)
{
	char	u;

	u = 122;
	while (u >= 97)
	{
		write(1, &u, 1);
		u--;
	}
}
