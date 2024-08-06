/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:01:51 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 09:33:39 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	phrase[10] = "j ai faim";
	char	coller[256]= "";

	ft_strcpy(coller, phrase);
	printf("%s\n", strcpy(coller,phrase));
	printf("%s\n", coller);

	return (0);
}
*/
