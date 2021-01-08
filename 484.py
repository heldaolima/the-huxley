'''O Animal Zoo está realizando um cadastro de todos os animais que abriga em suas dependências. 
Escreva um programa que receba como entrada o tipo (Ex: elefante, jacaré, etc), o peso e o país de origem 
de vários animais, até que tenham sido informados todos, e exiba a quantidade de macacos, o peso médio dos tigres, 
e a quantidade de cobras que vieram da Venezuela.'''

#Huxley484

contmacaco = pesotigres = contigres = cobraven = 0

while True:
    animal = str(input()).lower()
    if animal == 'macaco':
        contmacaco += 1
    peso = float(input())
    if animal == 'tigre':
        contigres += 1
        pesotigres += peso
    pais = str(input()).lower()
    if animal == 'cobra' and pais == 'venezuela':
        cobraven += 1
    continuar = str(input()).upper()
    if continuar == 'PARAR':
        break

if contigres >= 1:
    mediatigres = pesotigres / contigres
else:
    mediatigres = 0

print('{}'.format(contmacaco))
print('{:.2f}'.format(mediatigres))
print('{}'.format(cobraven))
