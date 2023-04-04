#include "libft.h"

int	main(void)
{
	char	**strs;
	int		width;
	int		height;

	height = 0;
	strs = readlines(&height);
	width = get_width(strs[0]);
	which_colle(strs, width, height);
	return (0);
}
