#!/bin/bash

if [[ -z $1 ]]; then
    echo "Не дана папка."
    exit 1
fi

if [[ -n $2 && $2 == *.tar.gz ]]; then
    archive=$2
else
    archive="$1.tar.gz"
fi

tar cvf $archive $1 > tar.log

if [[ $? -eq 0 ]]; then
    echo "Ваша папка заархивирована."
else
    echo "Не получилось(((("
fi