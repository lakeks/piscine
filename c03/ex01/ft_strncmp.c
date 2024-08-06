/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:59:53 by ktong             #+#    #+#             */
/*   Updated: 2024/01/30 17:32:19 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && s2[count] && s1[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count ++;
	}
	while (count < n)
	{
		if (s1[count] == '\0')
			return (-s2[count]);
		else if (s2[count] == '\0')
			return (s1[count]);
		count ++;
	}
	return (0);
}
/*
int	main(void)
{
	char	phrase[] = "asder";
	char	phrase2[] = "asde";
	int	i = 4;

	printf("%d\n", strncmp(phrase, phrase2, i));
	printf("%d\n", ft_strncmp(phrase, phrase2, i));
	return (0);
}
*/
