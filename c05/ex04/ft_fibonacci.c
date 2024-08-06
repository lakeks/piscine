/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:42:35 by ktong             #+#    #+#             */
/*   Updated: 2024/02/01 22:50:17 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}
/*
int	main(void)
{
	int	i = 5;

	printf("%d\n", ft_fibonacci(i));
	return (0);
}
*/
