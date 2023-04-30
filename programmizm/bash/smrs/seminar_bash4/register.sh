#!/bin/bash
# TODO
# 1. считывание имени и пароля +
# 2. повторное считывание пароля +
# 3. проверка равенства пароля +
# 3.1. спрашивать пароли, пока они не будут равны +
# 4. записать в файл имя и пароль +
# 5. записать хэш, а не пароль +
# 6. проверка на существование юзера +
. ./check_input.sh
pswd_filename=passwords.txt
function creds_to_file {
    pswd_hash=`echo $2 | md5sum | awk '{print $1}'`
    echo "$1 $pswd_hash" >> $pswd_filename
}

echo "Добро пожаловать в скрипт регистрации! q для выхода"
read -p "Введите имя пользователя: " username
check_input $username
if [[ -f $pswd_filename ]]
then
    while read user pswd
    do
        if [[ $user == $username ]]
        then
            echo "Пользователь с именем $user существует."
            exit 0
        fi
    done < $pswd_filename
fi

while true
do
    read -p "Введите пароль: " password_1
    check_input $password_1
    read -p "Повторите пароль: " password_2
    check_input $password_2
    if [[ $password_1 == $password_2 ]]
    then
        echo "Вы зарегистрированы."
        creds_to_file $username $password_1
        break
    else
        echo "Пароли не совпадают."
    fi
done
