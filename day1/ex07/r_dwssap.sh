#!/bin/sh

cat /etc/passwd | sed '/^#/ d' | awk 'NR%2==0' | sed 's/:.*//' | rev | sort -r | awk -v line1="$FT_LINE1" -v line2="$FT_LINE2" 'NR >= line1 && NR <= line2' | xargs | sed 's/ /, /g' | awk '{print $0"."}' | tr -d '\n'
