x = int(input())

if x % 2 == 0:
    print(2)
else:
    for i in range(3, 30001, 2):
        if x % i == 0:
            print(i)