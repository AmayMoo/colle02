#include "libft.h"

int	check_first_line4(char *line, int size)
{
	int	current_offset;

	current_offset = 0;
	if (line[current_offset++] != 'A')
	{
		return (1);
	}
	if (size > 1)
	{
		while (current_offset < (size - 1))
		{		
			if (line[current_offset++] != 'B')
			{
				return (1);
			}
		}
		if (line[current_offset] != 'C')
		{
			return (1);
		}
	}
	return (0);
}

int	check_inter_line4(char *line, int size)
{
	int	current_offset;

	current_offset = 0;
	if (line[current_offset++] != 'B')
	{
		return (1);
	}
	if (size > 1)
	{
		while (current_offset < (size - 1))
		{
			if (line[current_offset++] != ' ')
			{
				return (1);
			}
		}
		if (line[current_offset] != 'B')
		{
			return (1);
		}
	}
	return (0);
}

int	check_last_line4(char *line, int size)
{
	int	current_offset;

	current_offset = 0;
	if (line[current_offset++] != 'C')
	{
		return (1);
	}
	if (size > 1)
	{
		while (current_offset < (size - 1))
		{
			if (line[current_offset++] != 'B')
			{
				return (1);
			}
		}
		if (line[current_offset] != 'A')
		{
			return (1);
		}
	}
	return (0);
}

int	check_colle04(char **tab, int width, int height)
{
	int	current_line;

	current_line = 1;
	if (check_first_line4(tab[0], width) != 0)
	{
		return (1);
	}
	if (check_last_line4(tab[height - 1], width) != 0)
	{
		return (1);
	}
	while (current_line < height - 1)
	{
		if (check_inter_line4(tab[current_line], width) != 0)
		{
			return (1);
		}
		current_line++;
	}
	return (0);
}
