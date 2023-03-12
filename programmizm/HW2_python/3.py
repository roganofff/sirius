num = int(input())
count = 0
summ = 0

while num != 0:
    summ += num
    count += 1
    num = int(input())

print(summ / count)