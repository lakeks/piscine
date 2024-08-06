/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:53:24 by ktong             #+#    #+#             */
/*   Updated: 2024/02/12 18:24:11 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	count;

	count = 0;
	if (max - min <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[count] = min;
		count++;
		min ++;
	}
	return (tab);
}
/*
int main(void)
{
	int min = 0;
	int max = 0;
	int size = max - min;
	int count = 0;
	int *tab;
	
	tab = ft_range(min, max);
	while (count < size)
	{
		printf("%d,",tab[count]);
		count++;
	}
	return (0);
}
*/
