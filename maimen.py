"""Escreva a função le_e_devolve_menor() que leia uma sequência de números inteiros e devolva (retorne) o menor 
número. A entrada de um número negativo indica que sequência terminou. Neste caso o número negativo não deve ser
 considerado como o menor valor. Caso somente um único número negativo seja lido, a função deve devolver 0 (zero).

Em seguida, escreva a função le_e_devolve_maior() que leia uma sequência de números inteiros e devolva (retorne)
o maior número. A entrada de um número negativo indica que sequência terminou. Caso somente um único número
negativo seja lido, a função deve devolver 0 (zero).

OBS: você só precisa escrever o código das funções le_e_devolve_menor() e le_e_devolve_maior() com a lógica 
pedida, incluindo o cabeçalho (assinatura) das funções (isto é, o comando def). """

# Escreva o codigo da funcao le_e_devolve_menor() na sequencia:
def le_e_devolve_menor():
    n = 0
    cont = 0
    menor = 0
    while n >= 0:
        n = int(input())
        if n >= 0:
            if cont == 0:
                menor = n
            else:
                if n < menor:
                    menor = n
        cont += 1
    return menor

# Escreva o codigo da funcao le_e_devolve_maior() na sequencia:
def le_e_devolve_maior():
    n = 0
    cont = 0
    maior = 0
    while n >= 0:
        n = int(input())
        if n >= 0:
            if cont == 0:
                maior = n
            else:
                if n > maior:
                    maior = n
        cont += 1
    return maior

opcao = input()
if opcao == 'menor':
	menor = le_e_devolve_menor()
	print(menor)
elif opcao == 'maior':
	maior = le_e_devolve_maior()
	print(maior)
