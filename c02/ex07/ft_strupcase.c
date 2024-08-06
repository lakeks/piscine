/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:11:50 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 17:12:11 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if ((str[count] > 96) && (str[count] < 123))
		{
			str[count] = str[count] - 32;
		}
		count ++;
	}
	return (str);
}
/*
int	main(void)
{
	char	list[] = "j ai toujours faim";

	printf("%s", ft_strupcase(list));
	return (0);
}
*/
