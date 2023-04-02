#include "libft.h"

int	check_first_line(char **tab, int width, int height)
{
	int	current_line;
	int	current_offset;

	current_offset = 0;
	current_line = 0;

	if (tab[current_line][current_offset++] != '/')
	{
		return (1);
	}
	while (current_offset < (width - 2))
	{		
		if (tab[current_line][current_offset++] != '*')
		{
			return(1)
		}
	}
	if (tab[current_line][current_offset] != '\')
	{
		return (1);
	}
	return (0);
}

int	check_inter_line(char **tab, int width, int height)
{
	int	current_line;
	int	current_offset;

	current_offset = 0;
	current_line = 0;
    while (current_line < (height - 2))
	{
		if (tab[current_line][current_offset++] != '*')
		{
    	    return (1);
		}
		while (current_offset < (width - 2))
		{
			if (tab[current_line][current_offset++] != ' ')
			{
				return(1)
			}
		}
		if (tab[current_line][current_offset] != '*')
		{
			return (1);
		}
		current_line++;
		current_offset = 0;
		return (0);
	}
}

int	check_last_line(char **tab, int width, int height)
{
	int	current_line;
	int	current_offset;

	current_offset = 0;
	current_line = 0;
	if (tab[current_line][current_offset++] != '/')
	{
		return (1);
	}
	while (current_offset < (width - 2))
	{
		if (tab[current_line][current_offset++] != '*')
		{
			return(1)
		}
	}
	if (tab[current_line][current_offset] != '\')
	{
		return (1);
	}
	return (0);
}

int	check_colle01(char **tab, int width, int height)
{
	if (check_first_line(tab, width, height) != 0)
	{
		return (1);
	}
	if (check_last_line(tab, width, height) != 0)
	{
		return (1);
	}
	if (check_inter_line(tab, width, height) != 0)
	{
		return (1);
	}
	return (0);
}
