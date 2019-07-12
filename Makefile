# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 07:53:49 by tcoetzee          #+#    #+#              #
#    Updated: 2019/07/12 13:01:40 by tcoetzee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
CHECKER_N = checker
PUSH_SWAP_N = push_swap
LIBFT = libft/libft.a
CHECKER_SRC = checker.c swap.c ss.c pa.c pb.c reverse.c rr.c revreverse.c rrr.c\
			  grab_command.c find_command.c first_confirmed_ordered.c\
			  final_confirmed_ordered.c min_finder.c alg_file.c\
			  str_n_file.c free_here.c confirming_digits.c

PUSH_SWAP_SRC = push_swap.c swap.c ss.c pa.c pb.c reverse.c rr.c revreverse.c\
				rrr.c grab_command.c find_command.c first_confirmed_ordered.c\
				final_confirmed_ordered.c min_finder.c alg_file.c sort_three.c\
				sort_three_solutions.c my_insert_sort.c confirming_digits.c\
				range.c is_b_ordered.c smallest_finder.c biggest_finder.c\
				tot_b.c send_entire_b_to_a.c b_helper_functs.c\
				helper_ra_rra.c sort_five.c str_n_file.c bulky_med.c\
				bulky_large.c jumbo_list.c free_here.c

all: $(CHECKER_N)

$(CHECKER_N):
	@echo "Creating the checker excecutable..."
	@gcc $(CFLAGS) $(LIBFT) $(CHECKER_SRC) -o $(CHECKER_N)
	@echo "Creating the push_swap executable..."
	@gcc $(CFLAGS) $(LIBFT) $(PUSH_SWAP_SRC) -o $(PUSH_SWAP_N)

clean:
	@echo "Cleaning executables..."
	@rm -f $(CHECKER_N)
	@rm -f $(PUSH_SWAP_N)

re: clean all

