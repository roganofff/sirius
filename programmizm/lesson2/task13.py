sentence = input()

print(sentence[(sentence[:sentence.find('@')].rfind(' ')) + 1:(sentence.find('@') + sentence[sentence.find('@'):].find(' '))])

# Дорогие друзья, для связи со мной лучше использовать почту mymail@mymail.ru на моём личном сервере. Так вы будете
# уверны, что я прочту ваше письмо оперативно.
