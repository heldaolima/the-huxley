tot = 0
for c in range(0, 7):
    esc = str(input()).capitalize()
    if esc == 'Rádio':
        radesc = str(input()).upper()
        if radesc == 'AM':
            tot += 300
        elif radesc == 'FM':
            tot += 500
    elif esc == 'Tv' or esc == 'TV':
        hora = int(input())
        if hora <= 20:
            tot += 1200
        else:
            tot += 2000
    elif esc == 'Revista':
        tot += 750
    elif esc == 'Outdoor':
        tot += 1500
print('{:.2f}'.format(tot))
