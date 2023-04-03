#include "libft.h"


void	putresult(int * result, int result_size, int width, int height)
{
	int aucune;
	int index;
	int index_buffer;

	aucune = 1;
	index = 0;

	while(index < result_size){
		char buffer[256];
		if(result[index] == 0)
		{
			index_buffer = 0;
			if(aucune == 0)
			{
				buffer[index_buffer++] = ' ';
				buffer[index_buffer++] = '|';
				buffer[index_buffer++] = '|';
				buffer[index_buffer++] = ' ';
			}

			buffer[index_buffer++] = '[';
			buffer[index_buffer++] = 'c';
			buffer[index_buffer++] = 'o';
			buffer[index_buffer++] = 'l';
			buffer[index_buffer++] = 'l';
			buffer[index_buffer++] = 'e';
			buffer[index_buffer++] = '0';
			buffer[index_buffer++] = '0' + index;
			buffer[index_buffer++] = ']';
			buffer[index_buffer++] = ' ';
			buffer[index_buffer++] = '[';
			buffer[index_buffer++] = '0' + width;
			buffer[index_buffer++] = ']';
			buffer[index_buffer++] = ' ';
			buffer[index_buffer++] = '[';
			buffer[index_buffer++] = '0' + height;
			buffer[index_buffer++] = ']';

			ft_putstr(buffer);

			aucune = 0;
		}

		index ++;
	}

	if(aucune == 1)
	{
		ft_putstr("aucune");
	}
	ft_putstr("\n");
}
