#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char read_stdin(void)
{
	int ret;
	char c;
	
	ret = read(0, &c, sizeof(c));
	
	if (ret == 0)
		return ('\0');

	return c;
}

void my_memcpy(char * src, char * dest, int len){
	int i = 0;

	while(i < len){
		src[i] = dest[i];
	}
}

char * readline(void)
{
	char buff[256];
	int offset;
	
	while( (buff[offset ++] = read_stdin())){
		
		if(buff[offset - 1] == '\n')
		{
			buff[offset - 1] = '\0';

			char * ret = (char *) malloc(offset);
			my_memcpy(buff, ret, offset);
			return ret;
		}
	}

	if(offset > 1){
		char * ret = (char *) malloc(offset);
		my_memcpy(buff, ret, offset);
		return ret;
	}

	return (NULL);
}


char ** readlines(void){
	return (NULL);	
}


char ** listToArray( int ret_size){
/*	int size = listSize()
	char ** array = (char **) malloc(size);
	
	*ret_size = 0;
	
	pCurrent = fist_elem;

	while(pCurrent != NULL){
		array[(*ret_size)++] = (char *) pCurrent->data;
		pCurrent = pCurrent->next;
	}

	return array;
	*/

	return (NULL);
}
