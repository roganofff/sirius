academic_staff = []
used_last_names = []
last_name = ''

while True:
    list_of_pupils = []
    last_name = str(input("Enter your last name: "))

    if last_name == ' ':
        break
    elif last_name in used_last_names:
        print("This teacher already in list.")
        continue
    else:
        used_last_names.append(last_name)
        
    position = str(input("Enter your position at college: "))
    number_of_pupils = int(input("Enter number of pupils in group: "))

    while number_of_pupils != 0:
        list_of_pupils.append(number_of_pupils)
        number_of_pupils = int(input("Enter number of pupils in group: "))

    academic_staff.append([last_name, position, list_of_pupils])

print(academic_staff)