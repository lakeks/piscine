/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:46:27 by ktong             #+#    #+#             */
/*   Updated: 2024/02/18 16:55:08 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#iclude <unistd.h>
// char	*ft_strdup(char *src)
// {
// 	char	*i;
// 	int		count;

// 	count = 0;
// 	while (src[count])
// 		count++;
// 	i = malloc(sizeof(char) * count);
// 	count = 0;
// 	while (src[count])
// 	{
// 		i[count] = src[count];
// 		count ++;
// 	}
// 	i[count] = '\0';
// 	return (i);
// }

// int	ft_strlen(char *str)
// {
// 	int	len;

// 	len = 0;
// 	while (str[len])
// 	{
// 		len ++;
// 	}
// 	return (len);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int					i;
// 	struct s_stock_str	*mc;

// 	mc = malloc(sizeof(struct s_stock_str) * (ac + 1));
// 	if (mc == NULL)
// 		return (mc);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		mc[i].size = ft_strlen(av[i]);
// 		mc[i].str = av[i];
// 		mc[i].copy = ft_strdup(av[i]);
// 		i ++;
// 	}
// 	mc[i].str = NULL;
// 	return (mc);
// }

void	ft_putstr(char *str)
{
	int	count:

	count = 0;
	while(str[count])
	{
		write(1, &str[count++], 1);
	}
}

void	conditions(int *nb)
{
	if(*nb < 0)
	{
		write(1, "-", 1);
		*nb = -*nb;
	}
	else if (*nb == 0)
		write(1, "0", 1);
}

void	ft_print(int *attente, char *list, int *comp)
{
	*attente = list[*comp] + '0';
	write(1, &attente, 1);
	*comp -= 1; 
}

void	putnbr(int nb)
{

}