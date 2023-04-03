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
		dest[i] = src[i];
		i++;
	}
}

char * readline(void)
{
	char buff[256];
	int offset;
	
	offset = 0;

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

t_list	*add_line(t_list *head, char *line)
{
	t_list	*new_node;
	t_list	*tmp;


	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL){
		return (NULL);
	}
	new_node->line = line;
	new_node->next = NULL;
	if (head == NULL){
		return (new_node);
	}
	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (head);
}

char	**readlines(int * nb_lines)
{
	t_list	*head;
	t_list	*current;
	char	*line;
	char	**array;
	int		count;

	*nb_lines = 0;

	head = NULL;

	while ((line = readline()) != NULL)
		head = add_line(head, line);
	if (head == NULL)
		return (NULL);
	count = 0;

	current = head;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	array = (char **)malloc((count  )  * sizeof(char *));
	if (array == NULL)
		return (NULL);
	count = 0;

	current = head;
	while (current != NULL)
	{
		array[count] = current->line;
		count++;
		current = current->next;
	}
	*nb_lines = count ;
	return (array);	
}

