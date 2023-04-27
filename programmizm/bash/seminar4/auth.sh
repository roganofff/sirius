#!/bin/bash
. ./check_input.sh
pswd_filename=passwords.txt

echo "Добро пожаловать в скрипт регистрации! q для выхода"
read -p "Введите имя пользователя: " username
check_input $username
if [[ ! -f $pswd_filename ]]
then 
    echo "База пользователей и паролей не найдена."
    exit 0
fi

while read user pswd
do
    if [[ $user == $username ]]
    then
        password=$pswd
    fi
done < $pswd_filename

if [[ ! -n $password ]]
then
    echo "Пользователь $username не найден."
    exit 0
fi

try_num=3
try_cur=0
while [[ $try_cur -lt 3 ]]
do
    read -p "Введите пароль: " $inp_pswd
    inp_hash=`echo $inp_pswd | md5sum | awk '{print $1}'`
    if [[ $password == $inp_hash ]]
    then
        echo "Доступ открыт, добро пожаловать, $username"
        exit 0
    else
        echo "Пароль введён неверно, попыток осталось: $(($try_num-$try_cur-1))"
    fi
    try_cur=$(($try_cur+1))
done
echo "Попытки закончились."