/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:56:09 by ktong             #+#    #+#             */
/*   Updated: 2024/01/29 11:34:44 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count])
	{
		dest[count] = src[count];
		count ++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count ++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	copy[9] = "j ai faim";
	char	past[256] = "";
	unsigned int	i = 15;

	ft_strncpy(past, copy, i);
	printf("%s\n", strncpy(past, copy, i));
	printf("%s\n", past);
	return (0);
}
*/
