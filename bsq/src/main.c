/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:13:46 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 23:40:47 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_grid_params	get_more(t_grid_params params, t_line_info line, char c)
{
	int	i;

	i = 0;
	c = 1;
	line.arr = (char *)malloc((line.size * sizeof(char)) + 1);
	while (c != '\0' && c != '\n')
	{
		read(params.fd, &c, 1);
		line.arr[i] = c;
		i++;
	}
	line.arr[i] = '\0';
	params = parse_first_line(line, params);
	params = find_biggest_square(params);
	print_arr(params);
	i = 0;
	free(line.arr);
	while (i < params.y)
		free(params.fill[i++]);
	free(params.fill);
	free(params.matrix);
	return (params);
}

t_grid_params	get_first_line(t_grid_params params)
{
	char			c;
	t_line_info		line;

	line.size = 0;
	c = 1;
	while (c != '\0' && c != '\n')
	{
		read(params.fd, &c, 1);
		line.size++;
	}
	if (close(params.fd) < 0)
		ft_putstr("close error\n");
	params.fd = open(params.fn, O_RDONLY);
	if (params.fd < 0)
		ft_putstr("open error\n");
	params = get_more(params, line, c);
	return (params);
}

t_grid_params	read_std_in(t_grid_params params)
{
	char	b;

	params.fn = "-";
	params.fd = open(params.fn, O_CREAT | O_TRUNC | O_RDWR);
	b = 1;
	while (read(0, &b, 1))
		write(params.fd, &b, 1);
	close(params.fd);
	return (params);
}

t_grid_params	entry_point(t_grid_params params, int i, int ac, char **av)
{
	while (i < ac - 1 || !ft_strcmp(params.fn, "-"))
	{
		if (ft_strcmp(params.fn, "-"))
			params.fn = av[i + 1];
		params.fd = open(params.fn, O_RDONLY);
		if (params.fd < 0)
		{
			ft_putstr("map error\n");
			i++;
			continue ;
		}
		get_first_line(params);
		if (close(params.fd) < 0)
		{
			ft_putstr("close error\n");
			i++;
			continue ;
		}
		i++;
		params.fn = "+";
	}
	return (params);
}

int	main(int ac, char *av[])
{
	int				i;
	t_grid_params	params;

	params.is_valid = 1;
	i = 0;
	if (ac == 1)
		params = read_std_in(params);
	params = entry_point(params, i, ac, av);
	i = 0;
	return (0);
}
