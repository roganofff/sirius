num = int(input()) # получаем на вход первое число последовательности
prev = num # сразу обозначим прошлое, поместив в него текущее
max_seq = 0 # максимальная последовательность по умолчанию равна 0
cur_seq = 0 # и текущая тоже равна 0

while (num := int(input())) != 0: # получаем на ввод число и пока оно не равно 0, выполняем цикл
    while num > prev: # если число больше пред, то будем считать длину последовательности по возрастанию
        if cur_seq == 0:
            cur_seq = 2 # минимальная последовательность может состоять из двух элементов
        else:
            cur_seq += 1 # если последов уже есть, просто добавляем 1
        if max_seq < cur_seq:
            max_seq = cur_seq
        prev = num
        num = int(input())
    cur_seq = 0 # если мы вышли из цикла, то текущая последовательность обнуляется
    while num < prev and num != 0: # тут считаем длину, если последовательность по убыванию
        if cur_seq == 0: # тут всё тож самое
            cur_seq = 2
        else:
            cur_seq += 1
        if max_seq < cur_seq:
            max_seq = cur_seq
        prev = num
        num = int(input())
    cur_seq = 0 # и тут тоже тоже самое
    if num == 0: # если мы ввели 0, то просто выходим из всего цикла
        break

print(max_seq)
