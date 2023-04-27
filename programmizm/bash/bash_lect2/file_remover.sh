#!/bin/bash
if [[ -f $1 ]]
then
    rm $1
    echo "Файл $1 удалён."
else
    echo "Файл $1 не существует"
fi
