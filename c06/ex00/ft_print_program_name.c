/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:13:02 by ktong             #+#    #+#             */
/*   Updated: 2024/02/06 20:25:11 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *argv)
{
	int	count;

	count = 0;
	while (argv[count])
	{
		write(1, &argv[count], 1);
		count++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	ft_print_program_name(argv[0]);
	return (argc);
}
