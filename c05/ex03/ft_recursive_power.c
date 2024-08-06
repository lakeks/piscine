/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:54:44 by ktong             #+#    #+#             */
/*   Updated: 2024/02/01 19:51:12 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main(void)
{
	int	puissance = 5;
	int	nombre = 10;

	printf("%d\n", ft_recursive_power(nombre, puissance));
	return (0);
}
*/
