/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:01:14 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/13 17:24:48 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	long	lnb;
	char	c[20];
	int		index;

	lnb = nb;
	index = 0;
	if (lnb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb *= -1;
	}
	while (lnb)
	{
		c[index++] = (lnb % 10) + '0';
		lnb /= 10;
	}
	while (index--)
		ft_putchar(c[index]);
}
