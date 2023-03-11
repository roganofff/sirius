import math


def distance(x1, y1, x2, y2):
    return math.sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2))

x1, y1, x2, y2 = map(int, input().split())
print(distance(x1, y1, x2, y2))