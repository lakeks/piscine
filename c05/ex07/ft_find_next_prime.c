/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:01:10 by ktong             #+#    #+#             */
/*   Updated: 2024/02/08 12:36:52 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb % 2 == 0)
		return (0);
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb ++;
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d", ft_find_next_prime(2147483630));
	return (0);
}
*/
