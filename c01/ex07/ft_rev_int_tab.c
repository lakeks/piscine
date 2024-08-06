/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:37:33 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 19:26:54 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	comp;

	temp = 0;
	comp = 0;
	while (comp < size / 2)
	{
		temp = tab[comp];
		tab[comp] = tab[size - comp - 1];
		tab[size - comp - 1] = temp;
		comp++;
	}
}

/*
int	main(void)
{
	int	tableau[] = {1,2,3,4,5};
	int size = 5;
	int count = 0;

	ft_rev_int_tab(tableau, size);
	while (count < size)
	{
		printf("%d,",tableau[count]);
		count++;
	}

	return (0);
}
*/
