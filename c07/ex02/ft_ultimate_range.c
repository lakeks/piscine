/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:41:40 by ktong             #+#    #+#             */
/*   Updated: 2024/02/15 17:03:57 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;

	count = 0;
	if (min >= max)
	{
		(*range) = NULL;
		return (0);
	}
	(*range) = malloc(sizeof(int) * (max - min) + 1);
	if (*range == NULL)
		return (-1);
	while (max > min)
	{
		(*range)[count] = min;
		min++;
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	int	*tab[1];
	int	count;
	int	min;
	int	max;
	int	size;

	min = 0;
	max = 5;
	size = max - min;
	count = 0;
	ft_ultimate_range(tab, min, max);
	printf("Correct\n");
	while (count < size)
	{
		printf("%d,", (*tab)[count]);
		count ++;
	}
	return (0);
}
*/
