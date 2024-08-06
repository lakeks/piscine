/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spill_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:28:09 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 22:48:21 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	spill_fill(int i, int j, t_grid_params grid)
{
	int	min;

	min = grid.fill[i][j - 1];
	if (grid.fill[i - 1][j] < min)
		min = grid.fill[i - 1][j];
	if (grid.fill[i - 1][j - 1] < min)
		min = grid.fill[i - 1][j - 1];
	if (grid.fill[i][j] != 0)
		grid.fill[i][j] = min + 1;
}
