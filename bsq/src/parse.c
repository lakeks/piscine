/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:32:28 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 23:41:08 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_grid_params	parse_matrix(t_grid_params grid)
{
	int		i;
	int		j;
	char	b;

	i = 0;
	j = 0;
	b = 1;
	close(grid.fd);
	grid.fd = open(grid.fn, O_RDONLY);
	grid = init_grid(grid, i, j, b);
	return (grid);
}

int	parse_x(t_grid_params params)
{
	char	c;

	c = 1;
	params.x = 0;
	while (c != '\0' && c != '\n')
	{
		read (params.fd, &c, 1);
		params.x++;
	}
	return (params.x - 1);
}

int	parse_y(t_line_info line)
{
	int		i;
	char	*nbr_arr;

	i = 0;
	nbr_arr = (char *)malloc(line.size - 4 + 1);
	while (i < line.size - 4)
	{
		nbr_arr[i] = line.arr[i];
		i++;
	}
	nbr_arr[i] = '\0';
	return (ft_atoi(nbr_arr));
}

t_grid_params	parse_first_line(t_line_info line, t_grid_params params)
{
	params.empty = line.arr[line.size - 4];
	params.obstacle = line.arr[line.size - 3];
	params.full = line.arr[line.size - 2];
	params.x = parse_x(params);
	params.y = parse_y(line);
	params = parse_matrix(params);
	return (params);
}
