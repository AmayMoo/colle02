#include "libft.h"

int	which_colle(char **str, int width, int height)
{
	int	ret;

	if (*str[0] == 'o')
	{
		ret = check_colle00(str, width, height);
	}
	else if (*str[0] == '/')
	{
		ret = check_colle01(str, width, height);
	}
	else if (*str[0] == 'A')
	{
		ret = check_colle02(str, width, height);
	}
	else if (*str[0] == 'A')
	{
		ret = check_colle03(str, width, height);
	}
	else if (*str[0] == 'A')
	{
		ret = check_colle04(str, width, height);
	}
	else
	{
		ret = 1;
	}
	return (ret);
}
