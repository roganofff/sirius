def is_symmetric(n, arr):
    for i in range(n):  # просто проходимся по всем штучкам в списке
        for j in range(len(arr[i])):
            if arr[i][j] != arr[j][i]:  # если массив симметричен, то элементы [i][j] и [j][i] должны быть равны
                return False  # а если хоть один элемент не симметричен, то сразу возвращаем фигню...
    return True


n = int(input())  # получаем размеры массива
arr = [[]] * n  # создаём пустой массив из n элементов
for i in range(n):  # тут просто поулучаем элементы массива
    arr[i] = list(map(int, input().split()))

if is_symmetric(n, arr):  # ну тут и ежу понятно
    print('YES')
else:
    print('NO')
# вроде норм
