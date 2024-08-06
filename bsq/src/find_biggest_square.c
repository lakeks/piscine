/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:29 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 13:58:22 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_grid_params	find_biggest_square(t_grid_params grid)
{
	int	i;
	int	j;

	i = 0;
	grid.i = 0;
	grid.j = 0;
	grid.biggest_square = 1;
	while (i < grid.y - 1)
	{
		i++;
		j = 0;
		while (j < grid.x - 1)
		{
			j++;
			spill_fill(i, j, grid);
			if (grid.fill[i][j] > grid.biggest_square)
			{
				grid.i = i;
				grid.j = j;
				grid.biggest_square = grid.fill[i][j];
			}
		}
	}
	return (grid);
}
