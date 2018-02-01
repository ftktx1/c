#!/bin/sh

if ipconfig getifaddr en1 || ipconfig getifaddr en0
then 
	:
else
	echo "I am lost!"
fi
