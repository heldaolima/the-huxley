string = str(input())
string = string.split(' ')
cont = 0
for c in string:
    if c != '':
        cont += 1

print(cont)
