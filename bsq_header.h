#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# define BUF_SIZE 100000
# define FALSE -1
# define TRUE 1

typedef struct  s_matrix
{
    int         column;
    int         row;
	char        empty;
	char        barrier;
    char        full;
    char        **map;
}               t_matrix;

int				main(int argc, char **argv);

t_matrix		*create_struct(t_matrix *data, char *buf);

int				ft_atoi(char *str, int len);

int				search_row(char *data);

int				search_column(char *data);

char			*search_symbol(char *data);

char			**create_map(char *data);

int				open_file(char *buf, char *argv);

int				check_argc(int argc);

int				check_matrix(char *str);

int				check_first_line(char *str);

int				ft_strlen(char *str);

void			ft_putchar(char *str);

int				*create_int_matrix(t_matrix *data, int *sq);

int             *search_result(int **int_matrix, int *sq, int row, int col);

int             *ft_squarepoint(int **s, int *sq, int row, int col);

void            clean_int_matrix(int **int_matrix, int row);

void			print_result(t_matrix *data, int *pos);

void			clean_matrix(char **char_matrix, int row);

#endif
