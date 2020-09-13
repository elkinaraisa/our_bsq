#include "bsq_header.h"

void			print_result(t_matrix *data, int *pos)
{
	int			i;
	int			j;
	
	i = 0;
	while (i < data->row)
	{
		j = 0;
		while (j < data->column)
		{
			if (pos[1] - pos[0] < i && i <= pos[1] &&
				pos[2] - pos[0] < j && j <= pos[2])
				data->map[i][j] = data->full;
			write(1, &data->map[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void			ft_putchar(char *str)
{
	int			len;

	len = ft_strlen(str);
	write(1, str, len);
}
