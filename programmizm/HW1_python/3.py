n = int(input())

p1 = 0
p2 = 0
p3 = 0

if n >= 35:
    p3 += n // 60
    n -= n // 60 * 60
    if n >= 35:
         p3 += 1
         n -= 60
if n > 0:
    if 1 <= n % 10 <= 8:
        p1 += n % 10
        p2 += n // 10
    else:
        p2 += round(n / 10)

print(p1, p2, p3)