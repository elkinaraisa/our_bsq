#include "bsq_header.h"

 int				open_file(char *buf, char *argv)
{
	int			fd;
	int			ret;
	
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putchar("ERROR. File not found.\n");
		return (FALSE);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	close(fd);
	if (check_matrix(buf) == FALSE)
	{
		ft_putchar("Map error.\n");
		return (FALSE);
	}
	return (TRUE);
}