#!/bin/bash
filname=file

echo "Запущен тес удаления файла."
if [[ ! -f $filename ]]
then
    touch $filename
fi

chmod +x file_remover.sh
./file_remover.sh $filename

if [[ ! -f $filename ]]
then
    echo "Тест пройден."
    exit 0
else
    echo "Тест не пройден. Файл не был удалён."
    exit 1
    rm $filename
fi