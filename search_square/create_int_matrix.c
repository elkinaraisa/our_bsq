#include "bsq_header.h"

int					*create_int_matrix(t_matrix *data, int *sq)
{
    int				**int_matrix;
    int				i;
    int            	j;

    i = 0;
    int_matrix = (int **)malloc(sizeof(int *) * (data->row));
    if (int_matrix)
    {
        while (i < data->row)
        {
            int_matrix[i] = (int *)malloc(sizeof(int) * (data->column));
            j = 0;
            while (j < data->column)
            {
                if (data->map[i][j] == (data->empty))
                    int_matrix[i][j] = 1;
                else if (data->map[i][j] == (data->barrier))
                    int_matrix[i][j] = 0;
                j++;
            }
            i++;
        }
    }
    i = 0;
    search_result(int_matrix, sq, data->row, data->column);
	clean_int_matrix(int_matrix, data->row);
	return (sq);
}