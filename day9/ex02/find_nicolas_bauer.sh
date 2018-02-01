#!/bin/sh

grep -e "n\tbauer" -e "nicolas\tbauer" -i phonebook | grep -e '[0-9]\{3\}-[0-9]\{4\}' -e '[0-9]\{3\}.[0-9]\{4\}'
