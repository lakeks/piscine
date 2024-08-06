/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:33:16 by ktong             #+#    #+#             */
/*   Updated: 2024/01/25 10:35:37 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int	a;
	int	b;
	int diviseur;
	int modulo;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &diviseur, &modulo);
	printf("voici le resultat : div = %d et il reste  %d\n", diviseur, modulo);
	return (0);
}*/
