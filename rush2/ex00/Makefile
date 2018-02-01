# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Maker                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshimek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/28 23:35:40 by kshimek           #+#    #+#              #
#    Updated: 2018/01/28 23:37:56 by kshimek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME = libft.a
ENAME = rush-2

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
