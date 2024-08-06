/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:41:42 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 16:09:02 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z')
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

	printf("%d", ft_str_is_uppercase(sentence));
	return (0);
}
*/
