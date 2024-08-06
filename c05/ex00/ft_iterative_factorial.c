/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:32:37 by ktong             #+#    #+#             */
/*   Updated: 2024/01/31 23:37:59 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	count;

	f = 1;
	count = 1;
	if (nb < 0)
		return (0);
	while (count <= nb)
	{
		f = f * count;
		count++;
	}
	return (f);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	printf("%d\n", ft_iterative_factorial(i));
	return (0);
}
*/
