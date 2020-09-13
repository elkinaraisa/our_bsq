#include "bsq_header.h"

int                *search_result(int **int_matrix, int *sq, int row, int col)
{
    int       	  	i;
    int				j;
    
    i = 1;
    while (i < row)
    {
        j = 1;
        while (j < col)
        {
			if (int_matrix[i][j] == 0)
			{
				j++;
				continue;
			}
			else
			{
				if (int_matrix[i - 1][j] <= int_matrix[i][j - 1] &&
					int_matrix[i - 1][j] <= int_matrix[i - 1][j - 1])
					int_matrix[i][j] = int_matrix[i - 1][j] + 1;
				else if (int_matrix[i][j - 1] <= int_matrix[i - 1][j - 1] &&
						 int_matrix[i][j - 1] <= int_matrix[i - 1][j])
					int_matrix[i][j] = int_matrix[i][j - 1] + 1;
				else if (int_matrix[i - 1][j - 1] <= int_matrix[i][j - 1] &&
						 int_matrix[i - 1][j - 1] <= int_matrix[i - 1][j])
					int_matrix[i][j] = int_matrix[i - 1][j - 1] + 1;
			}
            j++;
        }
        i++;
    }
    ft_squarepoint(int_matrix, sq, row, col);
    return (sq);
}

int             *ft_squarepoint(int **s, int *sq, int row, int col)
{
    int         i;
    int         j;
    
    sq[0] = -1;
    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < col)
        {
            if (s[i][j] > sq[0])
            {
                sq[0] = s[i][j];
                sq[1] = i;
                sq[2] = j;
            }
            j++;
        }
        i++;
    }
    return (sq);
}


