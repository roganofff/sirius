marks = [0, 0, 0, 0, 0]
mark = int(input("Enter your mark: "))

while mark != -1:
    marks[mark - 1] += 1
    mark = int(input("Enter your mark: "))

total = 0
for i in range(2, 5):
    total += marks[i]

print("Marks: ", end='')
for i in range(5):
    for j in range(marks[i]):
        print(i + 1, end=' ')

print("\nNumber of marks: " + ''.join(str(marks) +
      "\nAcademic performance: " + str(total / sum(marks) * 100)))
