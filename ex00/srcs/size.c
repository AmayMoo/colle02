#include "ft_header.h"

int	get_width(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int	get_height(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			count++;
		}
		i++;
	}
	return (count);
}
