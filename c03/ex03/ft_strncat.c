/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:38:07 by ktong             #+#    #+#             */
/*   Updated: 2024/01/31 11:26:30 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
		count ++;
	while (count2 < nb && src[count2])
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
	char	destination[] = "j'ai ";
	char	source[] = "faim";
	int	i = 10;

	printf("original function : %s\n", strncat(destination, source, i));
	printf("before the function : %s\n", destination);
	printf("after the function : %s\n", ft_strncat(destination, source, i));
	return (0);
}
*/
