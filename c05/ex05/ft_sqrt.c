/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:56:22 by ktong             #+#    #+#             */
/*   Updated: 2024/02/05 21:13:17 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	upbound;
	long	lobound;
	long	mid;

	upbound = nb;
	lobound = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (lobound <= upbound)
	{
		if (lobound * lobound == nb)
			return (lobound);
		if (upbound * upbound == nb)
			return (upbound);
		mid = (lobound + upbound) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			upbound = mid - 1;
		else
			lobound = mid + 1;
	}
	return (0);
}
/*
int	main(void)
{
	int	a = 1073741824;

	printf("%d\n", ft_sqrt(a));
	return (0);
}
*/
