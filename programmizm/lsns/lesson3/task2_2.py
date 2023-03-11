q = ''
while q != "off":
    q = input("How do you want to have fun?\n").lower()
    if q == "game":
        print("Guess the number!")
        for i in range(3):
            num = int(input(".."))
            if num == 5:
                print("You've won the concert ticket!")
                break

print("That's all, folks.")

