/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:50:40 by ktong             #+#    #+#             */
/*   Updated: 2024/02/06 19:04:23 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int	count;

	count = 0;
	argc -= 1;
	while (argc > 0)
	{
		while (argv [argc][count])
		{
			write(1, &argv[argc][count], 1);
			count ++;
		}
		write(1, "\n", 1);
		argc --;
		count = 0;
	}
}

int	main(int argc, char *argv[])
{
	ft_rev_params(argc, argv);
	return (0);
}
