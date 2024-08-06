/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:26:06 by ktong             #+#    #+#             */
/*   Updated: 2024/01/25 10:28:06 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 10;
	nbr2 = 5;
	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("le resultat est %d et il reste %d\n", nbr1, nbr2);
	return (0);
}*/
