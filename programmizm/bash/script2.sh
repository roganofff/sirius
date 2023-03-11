#!/bin/bash
summ=0
if [[ $1 ]]
then
    for ((i=1;i<=$1;i++))
    do
        summ=$(($summ+$i))
    done

echo "your sum is $summ"

else    
    echo "no args"
fi