/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:47:26 by hiono             #+#    #+#             */
/*   Updated: 2024/02/11 13:00:23 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_memory()
{
	int dict = open ("numbers.dict", O_RDONLY);
	//printf("fd = %d\n", dict);
	char *c = malloc(sizeof(char) * 500);
	int sz = read(dict, c, 500);

	return (c);
}

char	*ft_put_in_dico(int count, int count2, char *c)
{
	char *str;
	// int	count3;
	int	i;

	i = 0;
	str = malloc(sizeof(char) * (count2 - count + 2));
	while (count <= count2)
	{
		str[i] = c[count];
		count++;
		i++;
	}
	str[i] = '\0';
	//printf("%s\n", str);
	return (str);
}

// char *ft_itoa(int nb)
// {
// 	int	power;
// 	int mod;
// 	int div;
// 	char *str;
// 	int	count;

// 	count = 0;
// 	power = 1;
// 	while (nb / power > 9)
// 		power*= 10;
// 	//power = 100;
// 	//printf("power = %d\n", power);
// 	str = malloc(sizeof(char) * 4);
// 	while (power >= 1)
// 	{
// 		div = nb / power;
// 		mod = nb % power;
// 		div += '0';
// 		str[count] = div;
// 		count ++;
// 		nb = mod;
// 		power /= 10;
// 	}
// 	str[count] = '\0';
// 	return (str);
// }

int	ft_strncmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_search_dict(char *str, char **dico)
{
	int	i;

	i = 0;
	while (dico[i * 2])
	{
		if (ft_strncmp(str, dico[i * 2]) == 0)
		{
			return (dico[i * 2 + 1]);
		}
		i++;
	}
	write(1, "Dict Error\n", 11);
	return (NULL);
}

char **ft_dico(char *c)
{
	int	count;
	int count2;
	char	*s;
	char	**dico;
	int		i;

	count = 0;
	count2 = 0;
	dico = malloc(sizeof(char*) * 82);
	while (c[count])
	{
		if ((c[count] >= '0' && c[count] <= '9') || (c[count] >= 'a' && c[count] <= 'z'))
		{
			count2 = count;
			while ((c[count2] >= '0' && c[count2] <= '9') || (c[count2] >= 'a' && c[count2] <= 'z'))
				count2++;
			count2 -= 1;
			//printf("c[count] = %c, c[count2] = %c\n", c[count], c[count2]);
			s = ft_put_in_dico(count, count2, c);
			dico[i] = s;
			i++;
			count = count2;
		}
		count++;
	}
	return (dico + 1);
}

void	ft_hundread(char **dico, int nb)
{
	int	divi;
	int	mod;
	int	count;
	int	nb_value;
	char	*strn;

	count = 100;
	divi = 0;
	mod = 0;
	nb_value = 0;
	//printf("c = %d\n", count);
	while (nb > 0)
	{
		divi = nb / count;
		mod = nb % count;
		divi *= count;
		if (divi > 100)
		{
			nb_value = divi / 100;
		}
		else if (divi >= 10 && divi < 100 && nb < 20)
		{
			nb_value = nb;
			//printf("nb = %d\n", nb_value);
			//printf("itoa = %s\n", ft_itoa(nb_value));
			strn = ft_search_dict(ft_itoa(nb_value), dico);
			write(1, strn, ft_strlen(strn));
			strn = NULL;
			break;
		}
		else
			nb_value = divi;
		//printf("nb = %d\n", nb_value);
		//printf("itoa = %s\n", ft_itoa(nb_value));
		strn = ft_search_dict(ft_itoa(nb_value), dico);
		write(1, strn, ft_strlen(strn));
		strn = NULL;

		if (divi > 100)
		{
			//printf("nb = 100\n");
			//printf("itoa = %s\n", ft_itoa(100));
			strn = ft_search_dict("100", dico);
			write(1, strn, ft_strlen(strn));
			strn = NULL;
		}
		nb = mod;
		count /= 10;
	}
}

char	*ft_rush02(int nb)
{
	//int nb;
	char **dico;
	char *c;

	c = ft_memory();
	//nb = ft_countline(c);
	// dico = malloc(sizeof(char*) * 82);
	dico = ft_dico(c);
	ft_hundread(dico, nb);

	return ("ok");
}

int	main(void)
{
	char *nbr_write;

	nbr_write = ft_rush02(14);
	return(0);
}

int	validation(char	*c, int nb)
{
	int	count;

	count = 0;
	if 

