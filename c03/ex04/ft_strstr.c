/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:56:10 by ktong             #+#    #+#             */
/*   Updated: 2024/01/30 20:42:09 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	count = 0;
	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		count = 0;
		while (str[count] == to_find[count])
		{
			count ++;
			if (to_find[count] == '\0')
			{
				return (str);
			}
		}
		str ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	sentence[] = "ababciadadbcakkklo";
	char	needle[] = "";

	printf("%s\n",ft_strstr(sentence, needle));
	return (0);
}
*/
