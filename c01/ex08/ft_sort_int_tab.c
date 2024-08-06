/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:50:41 by ktong             #+#    #+#             */
/*   Updated: 2024/01/26 15:49:45 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	comp;
	int	temp;

	comp = 0;
	temp = 0;
	while (comp < size - 1)
	{
		if (tab[comp] > tab[comp + 1])
		{
			temp = tab[comp];
			tab[comp] = tab[comp + 1];
			tab[comp + 1] = temp;
			comp = 0;
		}
		else
			comp++;
	}
}
/*int	main(void)
{
	int	tableau[] = {5,8,3,4,7};
	int	size = 5;
	int	count = 0;
    int	count2 = 0;

    while (count2 < size)
	{
		printf("%d", tableau[count2]);
		count2++;

	}
    printf("\n");
    ft_sort_int_tab(tableau, size);
	while (count < size)
	{
		printf("%d", tableau[count]);
		count ++;
	}
    printf("\n");
}*/
