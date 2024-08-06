/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:19:03 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 22:39:20 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_grid_params	init_grid(t_grid_params grid, int i, int j, char b)
{
	while (b != '\0' && b != '\n')
		read(grid.fd, &b, 1);
	grid.matrix = malloc(sizeof(char *) * (grid.y + 1));
	grid.fill = malloc(sizeof(int *) * (grid.y + 1));
	while (i < grid.y)
	{
		grid.matrix[i] = malloc(sizeof(char) * grid.x + 1);
		grid.fill[i] = malloc(sizeof(int) * (grid.x + 1));
		j = 0;
		while (j < grid.x)
		{
			read(grid.fd, &b, 1);
			grid.matrix[i][j] = b;
			if (grid.matrix[i][j] == grid.obstacle)
				grid.fill[i][j] = 0;
			else
				grid.fill[i][j] = 1;
			j++;
		}
		grid.matrix[i][j] = '\0';
		read(grid.fd, &b, 1);
		i++;
	}
	return (grid);
}
