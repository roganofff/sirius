n, m = map(int, input().split())
matrix = []
max_num = matrix[0][0]
max_i, max_j = 0, 0
for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)
    for j in range(m):
        if  matrix[i][j] > max_num:
            max_num = matrix[i][j]
            max_i, max_j = i, j

print(max_i, max_j)