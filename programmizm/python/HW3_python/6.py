string = str(input())  # получаем строку
s_find = string.find('f')  # вынесем индекс первой встречи буквы
s_rfind = string.rfind('f')  # и последней


if s_find == -1:  # если find возвращает -1, то буквы в слове нет
    print()
elif s_find == s_rfind:  # если оба методы возвращают одно и тоже, то буква одна
    print(s_find)
else:
    print(s_find, s_rfind)  # ну или иначе возращаем первую и последнюю
