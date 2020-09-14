all:					bsq_main

bsq_main:				check_argc.o check_file.o open_file.o create_int_matrix.o create_struct.o search_result.o print_result.o free_memory.o main.c ft_atoi.o
				gcc -Wall -Wextra -Werror -o bsq_main main.c check_argc.o check_file.o open_file.o create_int_matrix.o create_struct.o search_result.o print_result.o free_memory.o ft_atoi.o

check_argc.o:			check_argc.c
						gcc -Wall -Wextra -Werror -c check_argc.c bsq_header.h

check_file.o:			check_file.c
						gcc -Wall -Wextra -Werror -c check_file.c bsq_header.h

open_file.o:			open_file.c
						gcc -Wall -Wextra -Werror -c open_file.c bsq_header.h

create_int_matrix.o:	create_int_matrix.c
						gcc -Wall -Wextra -Werror -c create_int_matrix.c bsq_header.h

create_struct.o:		create_struct.c
						gcc -Wall -Wextra -Werror -c create_struct.c bsq_header.h

search_result.o:		search_result.c
						gcc -Wall -Wextra -Werror -c search_result.c bsq_header.h

print_result.o:			print_result.c
						gcc -Wall -Wextra -Werror -c print_result.c bsq_header.h

free_memory.o:			free_memory.c
						gcc -Wall -Wextra -Werror -c free_memory.c bsq_header.h

ft_atoi.o:				ft_atoi.c
						gcc -Wall -Wextra -Werror -c ft_atoi.c bsq_header.h

clean:
				rm -f check_argc.o check_file.o open_file.o create_int_matrix.o create_struct.o search_square.o print_result.o free_memory.o ft_atoi.o bsq_header.h.gch

fclean:			clean
				rm -f bsq_main

.PHONY:			all clean fclean
