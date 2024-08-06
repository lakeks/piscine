/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:55:11 by ktong             #+#    #+#             */
/*   Updated: 2024/01/26 10:55:14 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len ++;
	}
	return (len);
}

/*int	main(void)
{
	char	phrase[] = "je veux manger";

	ft_strlen(phrase);
	return (0);
}*/
