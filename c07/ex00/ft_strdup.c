/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:48:25 by ktong             #+#    #+#             */
/*   Updated: 2024/02/07 17:49:41 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*i;
	int		count;

	count = 0;
	while (src[count])
		count++;
	i = malloc(sizeof(char) * count);
	count = 0;
	while (src[count])
	{
		i[count] = src[count];
		count ++;
	}
	i[count] = '\0';
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	printf("%s\n", ft_strdup(argv[1]));
	return (argc);
}
*/
