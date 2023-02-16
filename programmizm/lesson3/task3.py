item_price1 = int(input("Введите цену первого товара: "))
item_price2 = int(input("Введите цену второго товара: "))
item_price3 = int(input("Введите цену третьего товара: "))
item_sum = sum([item_price3, item_price2, item_price1])

if item_price1 > item_price2 > item_price3:
    print("Акция! Сумма товаров уменьшается в 3 раза.", item_sum / 3)
elif item_price1 < item_price2 < item_price3:
    print("Акция! Сумма товаров уменьшается в 2 раза.", item_sum / 2)
else:
    print("Сумма к оплате:", item_sum)
