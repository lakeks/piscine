/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:15:47 by ktong             #+#    #+#             */
/*   Updated: 2024/02/05 16:16:02 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 1;
	while (count2 < argc)
	{
		while (argv [count2][count])
		{
			write(1, &argv[count2][count], 1);
			count ++;
		}
		write(1, "\n", 1);
		count2++;
		count = 0;
	}
}

int	main(int argc, char *argv[])
{
	ft_print_params(argc, argv);
	return (0);
}
