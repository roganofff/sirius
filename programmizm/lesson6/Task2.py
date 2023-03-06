"""
Имеется список с произвольными значениями. Нужно преобразовать его во множество и проверить
являются ли все его элементы неизменяемыми.
Вывести True или False. И изменяемые элементы
Подсказка: чтобы узнать тип элемента можно использовать функцию type()
"""
test_list = [1, 2, 2, [3, 4], (1, 2, 3), "1", {1, 2, 3}]
print_set = set()
mutable_elements = [type(list()), type(set()), type(dict())]
elements_to_print = []
is_immutable = True

for e in test_list:
    if type(e) in mutable_elements:
        elements_to_print.append(e)
        is_immutable = False
        print_set.update(e)
    else:
        print_set.add(e)

print(print_set, elements_to_print, is_immutable, sep='\n')
