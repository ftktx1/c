#!/bin/sh

#create object files
gcc -c *.c;

#create library from object files
ar rc libft.a *.o;

#index the library
ranlib libft.a;
