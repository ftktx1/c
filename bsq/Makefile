# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshimek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/29 13:23:09 by kshimek           #+#    #+#              #
#    Updated: 2018/01/29 13:39:40 by kshimek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME = libft.a
ENAME = bsq

SRC = $(wildcard srcs/*.c)
INC = $(wildcard includes/)
OBJ = $(patsubst srcs/%.c, %.o, $(SRC))
GGCFLAGS = -Wall -Wextra -Werror

all: $(ANAME)

$(ANAME):
	gcc $(GGCFLAGS) -c $(SRC) -I$(INC)
	ar rc $(ANAME) $(OBJ)
	ranlib $(ANAME)
	gcc -o $(ENAME) $(ANAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(ANAME)
	/bin/rm -f $(ENAME)

re: fclean all
