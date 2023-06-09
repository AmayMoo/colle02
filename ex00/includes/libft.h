#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char			*line;
	struct s_list	*next;
}	t_list;

int		check_colle00(char **tab, int width, int height);
int		check_colle01(char **tab, int width, int height);
int		check_colle02(char **tab, int width, int height);
int		check_colle03(char **tab, int width, int height);
int		check_colle04(char **tab, int width, int height);
void	which_colle(char **str, int width, int height);
char	**readlines(int *nb_lines);
int		get_width(char *str);
char	read_stdin(void);
void	putresult(int *result, int result_size, int width, int height);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif
