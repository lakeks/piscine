/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:26:28 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 12:26:30 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'a' || str[count] > 'z')
		{
			if (str[count] < 'A' || str[count] > 'Z')
				return (0);
		}
		count ++;
	}
	return (1);
}
/*
int	main(void)
{
	char	sentence[] = "jaitoujourSfaim";

	printf("%d", ft_str_is_alpha(sentence));
	return (0);
}
*/
