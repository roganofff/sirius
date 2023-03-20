#!/bin/bash
i=1
for dogname in $(ls dogs)
do
    case $dogname in
        bobik) echo "bobik найден на строке $i";;
        *) echo "$dogname на строке $i не является бобиком(";;
    esac
    i=$(($i+1))
done

# https://cataas.com/cat