total_price = 0
price = int(input("Enter item price: "))

while price != 0:
    total_price += price
    price = int(input("Enter item price: "))

if total_price % 2 != 0:
    print("To be paid:", total_price - total_price * 0.15)
else:
    while total_price % 2 == 0:
        total_price /= 2
    print("To be paid:", total_price)
