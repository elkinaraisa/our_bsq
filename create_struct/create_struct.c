#include "bsq_header.h"

t_matrix			*create_struct(t_matrix *data, char *buf)
{
	char			*symbols;
	
	symbols = search_symbol(buf);
	data = (t_matrix *)malloc(sizeof(t_matrix) * 1);
	data->column = search_column(buf);
	data->row = search_row(buf);
	data->empty = symbols[0];
	data->barrier = symbols[1];
	data->full = symbols[2];
	data->map = create_map(buf);
	free(symbols);
	return(data);
}

int					search_row(char *data)
{
	int				len;
	int				i;
	
	i = 0;
	len = 0;
	while (data[i] != '\n')
		i++;
    i++;
	while (data[i] != '\n')
	{
		i++;
		len++;
	}
	return (len);
}

int					search_column(char *data)
{
	int				len;
	int				i;
	
	i = 0;
	
	while (data[i] != '\n')
		i++;
	i -= 4;
	len = ft_atoi(data, i);
	return (len);
}

char				*search_symbol(char *data)
{
	char			*symbol;
	int				i;
	
	i = 0;
	symbol = (char *)malloc(sizeof(char)*4);
	while (data[i] != '\n')
		i++;
	symbol[0] = data[i - 3];
	symbol[1] = data[i - 2];
	symbol[2] = data[i - 1];
	symbol[3] = '\0';
	return (symbol);
}

char				**create_map(char *data)
{
	int				row;
	int				i;
	int				j;
	int				k;
	char			**matrix;

	row = search_row(data);
	i = 0;
	j = 0;
    while (data[i++] != '\n');
	matrix = (char **)malloc(sizeof(char *) * (search_column(data)+ 1));
    if (matrix)
	{
		while (data[i] != '\0')
		{
			k = 0;
			matrix[j] = (char *)malloc(sizeof(char) * (row + 1));
			while (k < row)
                matrix[j][k++] = data[i++];
            matrix[j++][k] = '\0';
			if (data[i] == '\n')
				i++;
		}
		matrix[j] = 0;
	}
	return (matrix);
}
