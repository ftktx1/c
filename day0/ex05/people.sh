#!/bin/sh

ldapsearch -x -LLL "(uid=z*)" cn | grep "^cn*" | sed -e 's/cn: //' | sort -f -r
