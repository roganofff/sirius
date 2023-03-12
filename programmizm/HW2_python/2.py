N = int(input()) # вводится число чисел
has_Null = False # имеется ли ноль среди чисел, по умолчанию их нет

for i in range(N): # по очереди получаем и проверяем все N чисел 
    num = int(input())
    if num == 0: # если число является 0, то меняем значение перменной has_Null на истину
        has_Null = True 

if has_Null: # выводим YES или NO в зависимости от результата
    print('YES')
else:
    print('NO')
