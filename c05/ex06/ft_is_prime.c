/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:30:11 by ktong             #+#    #+#             */
/*   Updated: 2024/02/03 17:45:50 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (count <= (nb / 2))
	{
		if (nb % count == 0)
			return (0);
		count ++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i = 8;

	printf("%d\n", ft_is_prime(i));
	return (0);
}
*/
