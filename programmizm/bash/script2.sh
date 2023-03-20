#!/bin/bash
# shift сдвигает аргументы $1 == 1 -> $1 == 2
while [[ -n $1 ]]
do
    case $1 in
        -f) echo "Аргумент для -f равен $2"
        shift;;
        -o) echo "Аргумент для -o равен $2"
        shift;;
        *) echo "Неизвестный аргумент $1";;
    esac
    shift
done