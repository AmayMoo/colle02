#include "libft.h"

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int	main(void)
{
	int		nb = -50;
	int		nbr = 50;
    char	*str = "testitvance";

	ft_putstr(str);
	write(1, "\n", 1);
	ft_putnbr(nb);
	write(1, "\n", 1);
	ft_putnbr(nbr);
	write(1, "\n", 1);
	return (0);
}
