/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:24:52 by ktong             #+#    #+#             */
/*   Updated: 2024/01/28 13:02:17 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_value(int row, int col, int x, int y)
{
	if ((x == 1 && y > 1 && row == x - 1 && col == y - 1))
		ft_putchar('\\');
	else if ((y == 1 && x > 1 && col == y - 1  && row == x - 1))
		ft_putchar('\\');
	else if ((row == 0 && col == 0) || (row == x -1 && col == y -1))
		ft_putchar('/');
	else if ((x -1 == row && col == 0) || (row == 0 && y -1 == col))
		ft_putchar('\\');
	else if ((col == 0) || (y -1 == col) || (row == 0) || (row == x -1))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush01(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			print_value(row, col, x, y);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}

int	message(int x, int y)
{
	if ( (x < 0 || x != ) || (y < 0 || y != int)
			
