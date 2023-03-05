"""Создайте словарь с количеством элементов не менее 5-ти.
Поменяйте местами первый и последний элемент объекта.
Удалите второй элемент. Добавьте в конец ключ «new_key» со значением «new_value».
Выведите на печать итоговый словарь. Важно, чтобы словарь остался тем же (имел тот же адрес в памяти).
"""
dictionary = {'Belarus': 'Minsk', 'Germany': 'Berlin', 'USA': 'Washington', 'Japan': 'Tokyo', 'France': 'Paris'}

id_before = id(dictionary)

dictionary['Belarus'], dictionary['France'] = dictionary['France'], dictionary['Belarus']
del dictionary['Germany']
dictionary.update({'new_key': 'new_value'})

id_after = id(dictionary)

print(dictionary, '\n', id_before == id_after, sep='')


