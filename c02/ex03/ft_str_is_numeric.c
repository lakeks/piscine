/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_numeric.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:41:42 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 12:42:33 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < '0' || str[count] > '9')
		{
			return (0);
		}
		count ++;
	}
	return (1);
}
/*
int	main(void)
{
	char	sentence[] = "12354651a";

	printf("%d", ft_str_is_numeric(sentence));
	return (0);
}
*/
