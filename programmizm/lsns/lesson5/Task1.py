"""
Создайте словарь, в котором ключами будут числа от 1 до 10, а значениями эти же числа, возведенные в куб.
"""
cubed_numbers = dict()

for i in range(10):
    cubed_numbers[i + 1] = pow((i + 1), 3)

for number in cubed_numbers:
    print("Cubed", number, "is", cubed_numbers[number])
