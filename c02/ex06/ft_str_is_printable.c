/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:15:08 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 16:19:21 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] == 127)
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
	char	sentence[] = "dfhdht";

	printf("%d", ft_str_is_printable(sentence));
	return (0);
}
*/
