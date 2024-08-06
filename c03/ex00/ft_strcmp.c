 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:37:27 by ktong             #+#    #+#             */
/*   Updated: 2024/02/07 19:40:14 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s2[count])
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count ++;
	}
	return (s1[count] - s2[count]);
}
/*
int	main(void)
{
	char	sentence[] = "abur";
	char	sentence2[] = "ab";

	printf("%d\n", strcmp(sentence, sentence2));
	printf("%d\n", ft_strcmp(sentence, sentence2));
	return (0);
}
*/
