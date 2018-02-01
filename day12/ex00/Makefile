# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshimek <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 09:31:57 by kshimek           #+#    #+#              #
#    Updated: 2018/01/24 14:10:30 by kshimek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME = libft.a
ENAME = ft_display_file

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
