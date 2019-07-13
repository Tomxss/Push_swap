# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 12:12:08 by tcoetzee          #+#    #+#              #
#    Updated: 2019/06/18 13:40:51 by tcoetzee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
SRC	= $(wildcard ft_*.c)
OBJ	= $(SRC:%.c=%.o) #everything in SRC, BUT change .c to .o

.PHONY: clean

all: $(NAME)# Does all exist, if it does is it up-to-date
	
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Creating library..."	
$(OBJ): $(SRC)
	@gcc $(CFLAGS) $(SRC)

clean: 
	@rm -f $(OBJ)	# remove output files
	@echo "cleaning output files..."

fclean: clean
	@rm -f $(NAME)	# remove libft.a
	@echo "Removing library..."

re: fclean all


