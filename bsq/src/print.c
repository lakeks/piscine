/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:21:09 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 23:41:11 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_grid_params	mark_the_square(t_grid_params grid)
{
	int	i;
	int	j;

	i = grid.i;
	while (i > grid.i - grid.biggest_square)
	{
		j = grid.j;
		while (j > grid.j - grid.biggest_square)
		{
			grid.matrix[i][j] = grid.full;
			j--;
		}
		i--;
	}
	return (grid);
}

void	print_arr(t_grid_params grid)
{
	int	i;
	int	j;

	i = 0;
	grid = mark_the_square(grid);
	while (i < grid.y)
	{
		j = 0;
		while (j < grid.x)
		{
			ft_putchar(grid.matrix[i][j]);
			j++;
		}
		ft_putchar('\n');
		free(grid.matrix[i]);
		i++;
	}
}
