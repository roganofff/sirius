#!/bin/bash
# этот скрипт принимает два аргумента и возвращает их разницу
exec 1>>substract_output
exec 2>>substract_errors
exec 3>>substract_warnings
if [[ -n $1 && -n $2 ]]
then
    if [[ $1 -lt $2 ]]
    then
        echo "арг1 ($1) меньше арг2 ($2)">&3
    fi
    sub=$(($1-$2))
    echo "$1 - $2 = $sub"
else
    echo "скрипт требует два аргумента">&2
fi