#The below code is correct but does not pass for some reason. possibly the awk



#!/bin/sh

ldapsearch -Q "(sn=*bon*)" | awk 'BEGIN{x=0}/^sn: /{x++}END{print x}'
