# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshimek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 09:31:57 by kshimek           #+#    #+#              #
#    Updated: 2018/01/22 18:49:36 by kshimek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard srcs/*.c)
INC = $(wildcard includes/)
OBJ = $(patsubst srcs/%.c, %.o, $(SRC))
GGCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(GGCFLAGS) -c $(SRC) -I$(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
