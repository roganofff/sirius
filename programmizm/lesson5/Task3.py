"""
Напишите программу принимающую ввод информации о треке(место в чарте,исполнитель, название) пока пользователь
не введет "off". Программа должна вывести всю информацию в виде словаря вида: {(место,испонитель): название трека}
"""
tracks = dict()

while True:
    place_in_chart = input("Введите место в чарте: ")
    artist = input("Введите имя исполнителя: ")
    song = input("Введите название песни: ")

    if place_in_chart == 'off' and artist == 'off' and song == 'off':
        break
        
    tracks[(place_in_chart, artist)] = song

print(tracks)
