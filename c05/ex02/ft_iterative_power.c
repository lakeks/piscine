/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:11:44 by ktong             #+#    #+#             */
/*   Updated: 2024/02/01 12:12:08 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	resu;

	resu = 1;
	count = 0;
	if (power < 0)
		return (0);
	while (count < power)
	{
		resu = resu * nb;
		count ++;
	}
	return (resu);
}
/*
int	main(void)
{
	int	nombre = 10;
	int	puissance = 3;

	printf("%d\n", ft_iterative_power(nombre, puissance));
	return(0);
}
*/
