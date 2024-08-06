/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:31:36 by ktong             #+#    #+#             */
/*   Updated: 2024/01/25 10:31:58 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 3;
	printf("avant :a = %d et b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("apres : a = %d et b = %d\n", a, b);
}*/
