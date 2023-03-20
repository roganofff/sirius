n, m = map(int, input().split())

matrix = [['.' for _ in range(m)] for __ in range(n)]

for i in range(n):
    for j in range(m):
        if abs(i - j) % 2  == 1:
            matrix[i][j] = '*'

for i in range(n):
    print(*matrix[i])