def reduceFraction(n, m):
    a, b = n, m
    while a != 0 and b != 0:
        if a > b:
            a = a % b
        else:
            b = b % a
            
    return (n / (a + b), m / (a + b))

n, m = map(int, input().split())
print(reduceFraction(n, m))
