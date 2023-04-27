#!/bin/bash
if [[ ! -n $1 ]]
then
    echo "Не даны аргументы."
    exit 0
fi

total=0
big=0

if [[ -f $1 ]]
then
    while read radius
    do
        pi=3.14
        len=`bc <<< "$pi * $radius * 2"`
        s=`bc <<< "$pi * $radius * $radius"`
        if [[ `bc <<< "$s < 10"` -eq 1 ]]
        then
            echo "Маленький круг радиусом $radius: S = $s; L =$len."
        elif [[ `bc <<< "$s >= 10"` -eq 1 && `bc <<< "$s < 20"` -eq 1 ]]
        then
            echo "Средний круг радиусом $radius: S = $s; L =$len."
        elif [[ `bc <<< "$s >= 20"` -eq 1 ]]
        then
            echo "Большой круг радиусом $radius: S = $s; L =$len."
            big=$(($big+1))
        fi
        total=$(($total+1))
    done < $1
else
    echo "Не файл."
fi

echo "Больших кругов:" `bc -l <<< "$big / $total * 100"`%.
