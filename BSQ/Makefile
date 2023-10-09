# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psimcak <psimcak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 11:54:01 by psimcak           #+#    #+#              #
#    Updated: 2023/06/28 22:06:20 by psimcak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
FUN_DIR = c_files
BIN_DIR = bin
RM = rm

FUN_FILES = funct1\
			funct2\
			main\
			print_solution\
			read_and_struct\
			search_alg\
			search\
			standard_input\
			

OBJ	= $(addprefix $(BIN_DIR)/, $(addsuffix .o, $(FUN_FILES)))
SRC	= $(addprefix $(FUN_DIR)/, $(addsuffix .c, $(FUN_FILES)))


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	${BIN} ${RM} -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
