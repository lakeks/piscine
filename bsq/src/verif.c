/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:13:38 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 23:14:48 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	verif_same_arg(char *c)
{
	int		count;
	char	a;
	char	b;
	char	d;

	count = -1;
	while (c[count] >= '0' && c[count] <= '9')
		count ++;
	a = c[count];
	b = c[count + 1];
	d = c[count +2];
	while (c[count])
	{
		if (c[count] != a || c[count] != b
			|| c[count] != d || c[count] != '\n' || c[count] != '\0')
			return (1);
		else
			count ++;
	}
	return (0);
}

// int	verif(t_grid_params params)
// {
// 	verif_same_arg(char *c)
// }