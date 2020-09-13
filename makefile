all:			bsq_main

bsq_main:	check_data.o create_struct.o search_square.o print_matrix.o free_memory.o main.c ft_atoi.o
				gcc -Wall -Wextra -Werror -o bsq_main check_data.o create_struct.o search_square.o print_matrix.o free_memory.o ft_atoi.o main.c bsq_header.h

check_data.o: check_data.c
				gcc -Wall -Wextra -Werror -c check_data.c bsq_header.h

create_struct.o: create_struct.c
				gcc -Wall -Wextra -Werror -c create_struct.c bsq_header.h

search_square.o: search_square.c
				gcc -Wall -Wextra -Werror -c search_square.c bsq_header.h

print_matrix.o: print_matrix.c
				gcc -Wall -Wextra -Werror -c print_matrix.c bsq_header.h

free_memory.o: free_memory.c
				gcc -Wall -Wextra -Werror -c free_memory.c bsq_header.h

ft_atoi.o: ft_atoi.c
				gcc -Wall -Wextra -Werror -c ft_atoi.c bsq_header.h

clean:
				rm -f check_data.o create_struct.o search_square.o print_matrix.o free_memory.o ft_atoi.o bsq_header.h.gch

fclean:			clean
				rm -f bsq_main

.PHONY:			all clean fclean
