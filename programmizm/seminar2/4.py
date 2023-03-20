n = int(input())
matrix = [[0 for _ in range(n)] for __ in range(n)]

for i in range(n):
    for j in range(n):
        matrix[i][j] = abs(i - j)

for i in range(n):
    print(*matrix[i])