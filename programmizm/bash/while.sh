#!/bin/bash

# read -t 5 -s -p "введите значение для varname: " varname
# if [[ -n $varname ]]
# then
#     # echo "ваша секретная переменная varname равна $varname"
#     printf "\nваша секретная переменная varname равна $varname\n"
# else
#     echo "слишком медленно"
# fi

# while read student
# do
#     echo "Студент(ка)" $student
# done < students
#for student in `cat students`
#do
#    echo "Стундет: $student"
#done
#for ((i=0;i<5;i++))
#{
#    echo $i
#    sleep 2
#}

echo "all args using \$*"
for arg in "$*"
do
    echo $arg
done

echo "all args using \$@" # выводит арг таким образом, что по ним можно пройтись циклом
for arg in "$@"
do
    echo $arg
done

echo $#