x = int(input()) # получаем на вход число
count = 0 # счётчик делителей

for i in range(1, x + 1): # перебираем все возможные делители
    if x % i == 0: # смотрим, есть ли остаток от деления, если нет
        count += 1 # то это число является делителем x

print(count)