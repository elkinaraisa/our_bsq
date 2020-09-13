#include "bsq_header.h"

int					ft_atoi(char *str, int len)
{
	int				i;
	int				k;
	
	i = 0;
	k = 0;
	while (i <= len)
	{
		while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (str[i] >= '0' && str[i] <= '9')
		{
			k = 10 * k + (str[i] - '0');
			i++;
		}
	}
	return (k);
}
