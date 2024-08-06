/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:17:06 by ktong             #+#    #+#             */
/*   Updated: 2024/01/30 17:17:07 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
	{
		count ++;
	}
	while (src[count2])
	{
		dest[count] = src[count2];
		count ++;
		count2 ++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destination[20] = "j'ai tres ";
	char	source[] = "faim";

//	printf("%s\n", strcat(destination, source));
	printf("%s\n", ft_strcat(destination, source));
	return (0);
}
*/
