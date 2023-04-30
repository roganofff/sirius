#!/bin/bash

while [[ -n $1 ]]
do
    case $1 in
    -f) echo "given file is $2"
    shift;;
    -o) echo "output should redirect to $2"
    shift;;
    --) shift
    break;;
    *) echo "unkown named argument $1";;
    esac
    shift
done
counter=1
for arg in $@
do
    echo "arg #$counter: $arg"
    counter=$(($counter+1))
done