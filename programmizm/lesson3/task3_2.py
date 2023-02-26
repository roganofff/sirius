login = input("Enter your login: ")
forbidden_symbols = ['=', '?', '*', '$', '№', '@', '_']
used_forbidden_symbols = []

for symbol in login:
    if symbol in forbidden_symbols:
        used_forbidden_symbols.append(symbol)

print(' '.join(used_forbidden_symbols))
