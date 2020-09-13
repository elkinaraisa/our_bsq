#include "bsq_header.h"

int				check_matrix(char *str)
{
	int			i;
	int			len;
    int         count;
	char		*p;

	i = 0;
    count = 0;
    while (str[i++] != '\n')
    i++;
	len = search_row(str);
	if (len == 0)
		return (FALSE);
    p = search_symbol(str);
	while (str[i] != '\n' && str[i] != '\0')
	{
        if (str[i] != p[0] && str[i] != p[1])
                return (FALSE);
        count++;
        if ((str[i + 1] == '\n' || str[i + 1] == '\0') && count != len)
            return (FALSE);
        else if ((str[i + 1] == '\n' || str[i + 1] == '\0') && count == len)
        {
            count = 0;
            if (str[i + 1] == '\n')
                i++;
        }
        i++;
    }
    free(p);
	return (TRUE);
}

int				check_first_line(char *str)
{
	int			i;
	int			len;

	len = 0;
	i = 0;
	while (str[len] != '\n' && str[len] != '\0')
    {
        if (str[len] == '\0')
            return (FALSE);
        len++;
    }
    if (len < 4)
        return (FALSE);
	if (str[len - 3] == str[len - 1] ||
		str[len - 2] == str[len - 3] ||
		str[len - 1] == str[len - 2])
		return (FALSE);
	while (i < len - 3)
	{
		if (str[i] < '0' || str[i] > '9')
			return (FALSE);
		i++;
	}
	return (TRUE);
}
