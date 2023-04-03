#include "libft.h"

/*check first line corresponds to expected(o---o)*/
int	check_first_line0(char *line, int size)
{
	int	current_offset;

	current_offset = 0;
	if (line[current_offset++] != 'o')
	{
		return (1);
	}
	if (size > 1)
	{
		while (current_offset < (size - 1))
		{		
			if (line[current_offset++] != '-')
			{
				return (1);
			}
		}
		if (line[current_offset] != 'o')
		{
			return (1);
		}
	}
	return (0);
}

/*check intermediate line corresponds to expected(|   |)*/
int	check_inter_line0(char *line, int size)
{
	int	current_offset;

	current_offset = 0;
	if (line[current_offset++] != '|')
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
		if (line[current_offset] != '|')
		{
			return (1);
		}
	}
	return (0);
}

/*check last line corresponds to expected(o---o)*/
int	check_last_line0(char *line, int size)
{
	int	current_offset;

	current_offset = 0;
	if (line[current_offset++] != 'o')
	{
		return (1);
	}
	if (size > 1)
	{
		while (current_offset < (size - 1))
		{
			if (line[current_offset++] != '-')
			{
				return (1);
			}
		}
		if (line[current_offset] != 'o')
		{
			return (1);
		}
	}
	return (0);
}

int	check_colle00(char **tab, int width, int height)
{
	int	current_line;

	current_line = 1;
	if (check_first_line0(tab[0], width) != 0)
	{
		return (1);
	}
	if (check_last_line0(tab[height - 1], width) != 0)
	{
		return (1);
	}
	while (current_line < height - 1)
	{
		if (check_inter_line0(tab[current_line], width) != 0)
		{
			return (1);
		}
		current_line++;
	}
	return (0);
}
