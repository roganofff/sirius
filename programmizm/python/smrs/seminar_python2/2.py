n = int(input())
matrix = [['.'] * n for i in range(n)]
for i in range(n):
    matrix[i][i] = '*'
    matrix[n // 2][i] = '*'
    matrix[i][n // 2] = '*'
    matrix[i][n - i - 1] = '*'
for row in matrix:
    print(' '.join(row))