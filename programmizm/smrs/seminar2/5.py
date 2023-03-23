n = int(input())
matrix = [[2 for _ in range(n)] for __ in range(n)]

for i in range(n):
    matrix[n - i - 1][i] = 1

for i in range(n):
    for j in range(n):
        if matrix[i][j] != 1:
            matrix[i][j] = 0
        else:
            break

for i in range(n):
    print(*matrix[i])