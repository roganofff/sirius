n = int(input()) # получаем на вход значение

p1 = 0 # кол-во билетов на 1 поездку,
p2 = 0 # на 10 поездок,
p3 = 0 # и на 60 поездок. по умолчанию всего 0

if n >= 35: # если нужно совершить 35 поездок и более, то всегда выгодно покупать билет на 60 поездок (1 * 440 < 3 * 125 + 5 * 15) 
    p3 += n // 60 # считаем сколько билетов на 60 можно купить сразу
    n -= n // 60 * 60 # вычитаем кол-во поездок из уже купленных билетов
    if n >= 35: # если можем купить ещё один билет
         p3 += 1 # прибавляем один билет
         n -= 60 # и вычитаем кол-во поездок
if n > 0: # если ещё остались поездки, на которые не хватило билетов (n < 35)
    if 1 <= n % 10 <= 8: # если число заканчивается НЕ на 0 или 9, то выгоднее купить билеты по цифрам десятков и единиц
        p1 += n % 10     # например, n = 23; 2 * 125 + 3 * 15 < 3 * 125; 295 < 375
        p2 += n // 10
    else:
        p2 += round(n / 10) # если число заканчивается на 0 или 9, то просто округляем и делим на 10

print(p1, p2, p3) # вывод ответа