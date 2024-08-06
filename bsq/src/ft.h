/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:32:06 by tesingh           #+#    #+#             */
/*   Updated: 2024/02/14 23:33:18 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_line_info
{
	int		size;
	int		num;
	char	*arr;
}			t_line_info;

typedef struct s_grid_params
{
	int		fd;
	char	*fn;
	int		x;
	int		y;
	int		is_valid;
	char	empty;
	char	obstacle;
	char	full;
	char	**matrix;
	int		**fill;
	int		biggest_square;
	int		i;
	int		j;
}			t_grid_params;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
char			*ft_strchr(char *s, int c);
int				ft_strcmp(char *s1, char *s2);
void			spill_fill(int i, int j, t_grid_params grid);
t_grid_params	find_biggest_square(t_grid_params grid);
t_grid_params	init_grid(t_grid_params grid, int i, int j, char b);
t_grid_params	parse_matrix(t_grid_params grid);
int				parse_x(t_grid_params params);
int				parse_y(t_line_info line);
t_grid_params	parse_first_line(t_line_info line, t_grid_params params);
t_grid_params	mark_the_square(t_grid_params grid);
void			print_arr(t_grid_params grid);
int				verif_same_arg(char *c);

#endif
