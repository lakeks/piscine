/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:15:39 by ktong             #+#    #+#             */
/*   Updated: 2024/01/26 15:55:04 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char	*str)
{
	int	comp;

	comp = 0;
	while (str[comp] != '\0')
	{
		write(1, & str[comp], 1);
		comp ++;
	}
}

/*int main(void)
{
	char	chaine[]= "mon chien";
	
	ft_putchar(chaine);
	return (0);
}*/
