#include "bsq_header.h"

int				main(int argc, char **argv)
{
    char		buf[BUF_SIZE];
    t_matrix	*data;
	int			*position_square;

	data = 0;
    if (check_argc(argc) == TRUE)
    {
        if (open_file(buf, argv[1]) == TRUE)
        {
			position_square = (int *)malloc(sizeof(int) * 3);
            data = create_struct(data, buf);
            position_square = create_int_matrix(data, position_square);
			print_result(data, position_square);
			clean_matrix(data->map, data->row);
			free(data);
			free(position_square);
		}
	}
	return (0);
}
