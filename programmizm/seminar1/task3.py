def isPointInSquare(x, y):
    return abs(x) <= 1 and abs(y) <= 1

x, y = map(float, input().split())
if isPointInSquare(x, y):
    print("YES")
else:
    print("NO")