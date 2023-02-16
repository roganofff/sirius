pay_sum = int(input("Сумма к оплате: "))
current_time = int(input("Который час? "))

if not (8 <= current_time <= 22):
    print("Магазин не работает. Приходите с 8 до 22 часов.\nТекущее время:", current_time)
elif 10 <= current_time <= 12:
    print("Сумма к оплате уменьшается в 2 раза!", '\u0336'.join(str(pay_sum)) + '\u0336', "-->", pay_sum / 2)
elif 20 <= current_time <= 22:
    print("Сумма к оплате уменьшается в 4 раза!", '\u0336'.join(str(pay_sum)) + '\u0336', "-->", pay_sum / 4)