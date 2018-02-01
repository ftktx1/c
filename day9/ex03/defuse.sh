#!/bin/sh
touch -at $(date -d @$(( $(stat -c '%X' "$bomb.txt") - 1)) '+%Y%m%d%H%M.%S') bomb.txt
