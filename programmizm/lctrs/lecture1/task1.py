# for i in range(27, 123):
#     for j in range(27, 123):
#         print(chr(i) + chr(j))

# lst = [i * 10 for i  in range(10)]
# print(lst)

#a = [[i for i in range(1, 4)], 
 #    [i for i in range(4, 7)],
  #   [i for i in range(7, 10)]]

#a = [[1] * 5 for i in range(3)]
#a[2][2] = 5
#
#for i in range(0, len(a)):
#    for j in a[i]:
#        print(j, end=' ')
#    print('\n')

#matrix = [[1, 2, 3],
#          [4, 5, 6],
#          [5, 4, 2]]
#
#max_num = 0
#row, col = 0, 0
#
#for i in range(len(matrix)):
#    for j in range(len(matrix[i])):
#        if max_num < matrix[i][j]:
#            max_num = matrix[i][j]
#            row, col = i, j
#
#print(max_num, row, col)

n = int(input())
matrix = [[' '] * n for _ in range(n)]

for i in range(n):
    matrix[i][i] = '*'
    matrix[i][n - 1 - i] = '*'
    matrix[i][n // 2] = '*'
    matrix[n // 2][i] = '*'

for i in range(len(matrix)):
    print(*matrix[i])
