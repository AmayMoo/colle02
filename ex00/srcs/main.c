#include "libft.h"

int	main(void)
{
//	char	*str;
    char    **strs;
	int		width;
	int		height;

//	str = read_stdin();
	strs = readlines(&height);

	width = get_width(strs[0]);
		
	which_colle(strs, width, height);

	return (0);
}
