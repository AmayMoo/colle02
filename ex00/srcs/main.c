#include "libft.h"

int	main(void)
{
	char	*str;
	int		width;
	int		height;

	str = read_stdin();
	width = get_width(str);
	height = get_height(str);
	putresult(&str, width, height);
	return (0);
}
