#!/bin/bash
for name in $(ls)
do
    if [[ -f $name ]]
    then
        if [[ -x $name ]]
        then
            echo "$name is an executable file"
        else
            echo "$name is a file"
        fi
    elif [[ -d $name ]]
    then    
        echo "$name is a directory"
    else
        echo "$name is not a file nor a directory"
    fi
done