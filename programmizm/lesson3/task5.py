num = int(input("Введите число: "))

if num % 10 % 2 == 0 and sum(map(int, str(num))) % 3 == 0:
    print("Число %s делится на 6." % num)
else:
    print("Число %s не делится на 6." % num)
