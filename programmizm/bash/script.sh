#!/bin/bash
if [[ $1 -gt 0 && $1 -le 10 ]]
then
    echo "$1 принадлежит 1-му интервалу"
elif [[ $1 -gt 10 && $1 -le 20 ]]
then
    echo "$1 принадлежит 2-му интервалу"
elif [[ $1 -gt 20 && $1 -le 30 ]]
then
    echo "$1 принадлежит 3-му интервалу"
else
    echo "-1"
fi