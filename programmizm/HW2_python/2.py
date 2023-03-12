N = int(input())
has_Null = False

for i in range(N):
    num = int(input())
    if num == 0:
        has_Null = True

if has_Null:
    print('YES')
else:
    print('NO')
