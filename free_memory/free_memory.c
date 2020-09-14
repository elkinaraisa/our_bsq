#include "bsq_header.h"

void            clean_matrix(int **int_matrix, int row)
{
    int         i;

    i = 0;
 	while(i < row)
    {
        free(int_matrix[i]);
        i++;
    }
    free(int_matrix);
}
