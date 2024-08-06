/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:09:40 by ktong             #+#    #+#             */
/*   Updated: 2024/01/31 23:03:11 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	return_sign(int sign, int f)
{
	if (sign % 2 == 1)
		return (-f);
	return (f);
}

int	commande(char *str, int count, int temp, int mult)
{
	int	sign;
	int	f;

	sign = 0;
	f = 0;
	while (str[count] == ' ' || str[count] == '+' || str[count] == '-'
		|| str[count] == '\t' || str[count] == '\n' || str[count] == '\v'
		|| str[count] == '\f' || str[count] == '\r')
	{
		if (str[count] == '-')
			sign ++;
		count++;
	}
	while (str[count] > 47 && str[count] < 58)
		count ++;
	count--;
	while (str[count] > 47 && str[count] < 58)
	{
		temp = str[count] - '0';
		temp = temp * mult;
		f += temp;
		count--;
		mult = mult * 10;
	}
	return (return_sign(sign, f));
}

int	ft_atoi(char *str)
{
	int	count;
	int	res;
	int	mult;
	int	temp;

	count = 0;
	mult = 1;
	temp = 0;
	res = commande(str, count, temp, mult);
	return (res);
}

//  int main() {
//       printf("%i\n", ft_atoi("\t\n\v\f\r      23"));
//      printf("%i\n", ft_atoi("     ------+++++---12341"));
//      printf("%i\n", ft_atoi("     ------+++++---123413"));
//      printf("%i\n", ft_atoi("00000000002147483647"));
//      printf("%i\n", ft_atoi("-2147483648"));
//       printf("%i\n", ft_atoi("a"));
//   }
