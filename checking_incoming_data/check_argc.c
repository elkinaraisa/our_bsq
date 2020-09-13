#include "bsq_header.h"

int					check_argc(int argc)
{
	if (argc != 2)
	{
		ft_putchar("ERROR.Incorrect data.\n");
        return (FALSE);
	}
    return (TRUE);
}