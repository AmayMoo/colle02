#include "libft.h"

void	putresult(char **str, int width, int height)
{
	int	colle;

	colle = which_colle(str, width, height);
	if (colle == 1)
	{
		ft_putstr("aucune");
	}
	if (check_colle00(str, width, height) == 0)
	{
		ft_putstr("colle-00 ");
	}
	if (check_colle01(str, width, height) == 0)
	{
		ft_putstr("colle-01 ");
	}
	if (check_colle02(str, width, height) == 0)
	{
		ft_putstr("colle-02 ");
	}
	if (check_colle03(str, width, height) == 0)
	{
		ft_putstr("colle-03 ");
	}
	if (check_colle04(str, width, height) == 0)
	{
		ft_putstr("colle-04 ");
	}
}
