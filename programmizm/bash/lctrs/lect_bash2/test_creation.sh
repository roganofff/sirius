#!/bin/bash

echo "Запущен тест создания файла."
chmod +x file_crator.sh
./file_creator.sh $filename

if [[ -f $filename ]]
then
    echo "Файл $filename существует. Тест пройден."
    rm $filename
    exit 0
else
    echo "Файл $filename отсутствует в папке. Тест не был пройден."
    exit 1
fi