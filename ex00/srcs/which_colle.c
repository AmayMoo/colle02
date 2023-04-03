#include "libft.h"

void which_colle(char **str, int width, int height)
{
	//int	ret;

	int result[5];

	result[0] = check_colle00(str, width, height);
	result[1] = check_colle01(str, width, height);
	result[2] = check_colle02(str, width, height);
	result[3] = check_colle03(str, width, height);
	result[4] = check_colle04(str, width, height);

	putresult(result, 5 , width, height);

/*
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
*/

}
