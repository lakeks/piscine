/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:04:55 by ktong             #+#    #+#             */
/*   Updated: 2024/02/06 19:07:21 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

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

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
}

int	main(int argc, char *argv[])
{
	int	count;
	int	i;

	count = 1;
	while (count < argc)
	{
		i = count + 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[count], argv[i]) > 0)
			{
				ft_swap(&argv[count], &argv[i]);
			}
			i++;
		}
		ft_putstr(argv[count]);
		write(1, "\n", 1);
		count++;
	}
	return (argc);
}
