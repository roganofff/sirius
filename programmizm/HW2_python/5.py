num = int(input()) # получаем на вход первое число
max_num = num # т.к. это первое число, то оно и самое большое
count = 0 # пока что счётчик равен нулю, но в цикле увеличится

while num != 0: # пока юзер не введёт 0 цикл будет выполняться
    if num == max_num:  # если число равно максимальному,
        count += 1      # добавляем к счётчику 1
    elif num > max_num: # или если число больше максимального,
        max_num = num   # это число становится наибольшим
        count = 1       # и счётчик обновляется
    num = int(input())  # вводим новое число

print(count)