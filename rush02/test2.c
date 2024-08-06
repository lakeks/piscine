#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>

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
		if (c[count] >= '0' && c[count] <= '9')
		{
			count2 = count;
			while (c[count2] >= '0' && c[count2] <= '9')
				count2++;
			count2 -= 1;
			//printf("c[count] = %c, c[count2] = %c\n", c[count], c[count2])
			dico[i] = ft_put_in_dico(count, count2, c);
			i++;
			count = count2;
		}
		count++;
	}
	while (c[count])
	{
		int j = 0;

		if ((c[count] >= 'a' && c[count] <= 'z') || (c[count] >= 'A' && c[count] <= 'Z'))
		{
			count2 = count;
			while (c[count2] != '\n')
			{
				j = 0;
				while (c[count2 + j] == ' ')
					j++;
				if (c[count2 + j] != ' ' && c[count2 + j] != '\n')
					count2 += j;
				else if (c[count2 + j] == '\n')
					break;
				count2++;
			}
			count2 -= 1;
			//printf("c[count] = %c, c[count2] = %c\n", c[count], c[count2]);
			dico[i] = ft_put_in_dico(count, count2, c);
			count = count2;
		}
		count++;
	}

	return (dico + 1);