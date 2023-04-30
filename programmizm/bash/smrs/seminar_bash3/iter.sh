#!/bin/bash

while [[ -n $1 ]]
do
    case $1 in
    -o) echo "output file $2"
    file=$2
    shift;;
    --) shift
    break;;
    *) echo "unknown argument"
    shift;;
    esac
    shift
done

if [[ -n $1 && -n $2 && -n $file ]]
then
    if [[ $1 -lt $2 ]]
    then
        sum=0
        for ((i=$1;i<=$2;i++))
        {
            sum=$(($sum+$i))
        }
        echo $sum > "$file"
    else echo "b is greater or equal a"
    fi
else echo "you should have given an argument"
fi