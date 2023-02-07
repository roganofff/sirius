full_name = input()

surname = full_name[:full_name.find(' ')]

initial_name = full_name[full_name.find(' ') + 1]
initial_patronymic = full_name[full_name.rfind(' ') + 1]

print(surname, initial_name + '.' + initial_patronymic + '.')
