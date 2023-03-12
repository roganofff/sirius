N = int(input())
nums = input()

for i in range(nums):
    if nums[i] == ' ' and nums[i + 1] == '0':
        print('YES')
