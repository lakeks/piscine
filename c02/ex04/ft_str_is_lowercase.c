/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:41:42 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 12:56:38 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'a' || str[count] > 'z')
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

	printf("%d", ft_str_is_lowercase(sentence));
	return (0);
}
*/
