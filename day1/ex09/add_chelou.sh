#!/bin/sh

echo "ibase=A;obase=D;$(echo "ibase=5;obase=A;$(echo "$FT_NBR2" | tr 'mrdoc' '01234')" | bc )+$(echo "ibase=5;obase=A;$(echo "$FT_NBR1" | tr "\'\"\?\!\\" "02341")" | bc)" | bc | tr '0123456789ABC' 'gtaio luSnemf'
