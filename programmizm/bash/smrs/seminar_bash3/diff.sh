#!/bin/bash

max=-99999
min=99999
 
# if [[  ]]
# then
#     echo "empty file"
#     exit 0
# fi

for number in `cat $1`
do
    if [[ $number -lt $min ]]
    then
        min=$number
    elif [[ $number -gt $max ]]
    then
        max=$number
    fi
done
echo "$(($max - $min))"