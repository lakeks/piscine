/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:11:50 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 17:15:57 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if ((str[count] > 64) && (str[count] < 91))
		{
			str[count] = str[count] + 32;
		}
		count ++;
	}
	return (str);
}
/*
int	main(void)
{
	char	list[] = "J AI ENCORE FAIM";

	printf("%s", ft_strlowcase(list));
	return (0);
}
*/
