import math


def isPointInSquare(x, y):
    return abs(x) == 1 and y == 0 or abs(y) == 1 and x == 0

x, y = map(float, input().split())
if isPointInSquare(x, y):
    print("YES")
else:
    print("NO")