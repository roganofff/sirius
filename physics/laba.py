RESISTENCE = 20000
voltage = [4.51, 4.14, 3.51, 3.03, 2.61, 2.25, 1.93, 1.66, 1.42, 1.12, 1.05, 0.92, 0.79, 0.69, 0.59, 0.52, 0.45, 0.39, 0.34,
           0.3, 0.26]
amperage = []
for v in voltage:
    amperage.append(round(v / RESISTENCE * 10 ** 4, 6))

charges = []
for a in amperage:
    charges.append(round(a * 15, 2))

charge = sum(charges)

print("Напряжение U, В (все значения * 10^-4):", amperage)
print("Заряды q, К (все значения * 10^-4):", charges)
print("Заряд q, К:", charge)
print("Ёмкость конденсатора C, Ф:", round(charge / 4.66, 2))
