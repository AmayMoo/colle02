#include "libft.h"

#include <stdio.h>

int	main(void)
{
    char    **strs;
	int		width;
	int		height = 0;

	strs = readlines(&height);

	

	width = get_width(strs[0]);

	which_colle(strs, width, height);

	return (0);
}
