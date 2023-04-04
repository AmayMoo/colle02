#include "libft.h"

void	which_colle(char **str, int width, int height)
{
	int	result[5];

	result[0] = check_colle00(str, width, height);
	result[1] = check_colle01(str, width, height);
	result[2] = check_colle02(str, width, height);
	result[3] = check_colle03(str, width, height);
	result[4] = check_colle04(str, width, height);
	putresult(result, 5, width, height);
}
