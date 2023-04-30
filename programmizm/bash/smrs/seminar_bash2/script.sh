 #!/bin/bash
 if [[ ! -n $1 || ! -n $2 ]]
 then
    echo "Аргументы папок не были даны скрипту"
    echo "Использование: $0 папка с изображениями папка вывода"
    exit 0
fi

if [[ -d $1 ]]
then
    echo "Папка для ввода найдена, продолжаем"
else
    
    echo "Первый аргумент $1 не является папкой"
    exit 0
fi

if [[ -d $2 ]]
then 
    echo "Папка для вывода найдена, продолжаем"
else
    echo "Папка для ввода не найдена, создаём"
    mkdir $2
fi

i=1
for file in $(ls $1)
do
    from="$1/$file"
    if [[ $file == *.jpg ]]
    then
        to="$2/$i.jpg"
        echo "Копирование из $from в $to"
        cp $from $to
        i=$(($i+1))
    else
        echo "Файл $from не является png-изображениями, пропускаем..."
    fi
done