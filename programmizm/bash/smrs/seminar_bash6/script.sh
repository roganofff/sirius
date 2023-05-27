#!/bin/bash

if [[ ! -n $1 ]]; then
    echo "Не передан аргумент скрипта."
    exit 1
fi
if [[ ! -d $1 ]]; then
    echo "$1 не директория."
    exit 1
fi

total=0
declare -A extensions
extensions+=( [DIR]=0 )
for file in folder/*
do
    if [[ ! ${extensions[]+_} ]]; then

    if [[ "`file $file | awk '{print $2}'`" == "directory" ]]; then
        extensions[DIR]=$((${extensions[DIR]} + 1))
    fi
done    
echo ${extensions[DIR]}