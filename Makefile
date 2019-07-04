# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 07:53:49 by tcoetzee          #+#    #+#              #
#    Updated: 2019/07/04 11:19:54 by tcoetzee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
CHECKER_N = checker
PUSH_SWAP_N = push_swap
LIBFT = libft/libft.a
CHECKER_SRC = chk_*.c
PUSH_SWAP_SRC = ps_*.c 

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

