#!/bin/bash

if [[ ! -n $1 ]]; then
    echo "Аргумент не был передан."
    exit 1
fi

if [[ ! -f $1 ]]; then
    echo "Файла не существует."
    exit 1
fi

while read address
do
    ping -W 1 -c 4 $address > /dev/null
    if [[ $? -eq 0 ]]; then
        echo "Адрес $address доступен."
    else
        echo "Адрес $address не доступен."
    fi
done < $1