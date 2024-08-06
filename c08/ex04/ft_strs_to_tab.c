/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:39:46 by ktong             #+#    #+#             */
/*   Updated: 2024/02/18 16:42:16 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len ++;
	}
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*mc;

	mc = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (mc == NULL)
		return (mc);
	i = 0;
	while (i < ac)
	{
		mc[i].size = ft_strlen(av[i]);
		mc[i].str = av[i];
		mc[i].copy = ft_strdup(av[i]);
		i ++;
	}
	mc[i].str = NULL;
	return (mc);
}
/*
int main(int argc,char *argv[])
{
	ft_strs_to_tab(argc, argv);
	return (0);
}
*/
