#!/bin/bash
#return -> 0-255

function f2
{
    echo "Это функция два"
    echo "args2: $1 $2"
    return
}

result=$(f2)
echo "Код завершения $?"
echo "Результат функции: $result"