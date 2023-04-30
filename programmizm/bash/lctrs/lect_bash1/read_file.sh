#!/bin/bash
exec 0<$1
i=1
while read line
do
    echo "line #$i: $line"
    i=$(($i+1))
done