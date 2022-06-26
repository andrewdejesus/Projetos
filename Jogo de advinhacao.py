import random #Módulo que faz a geração de números aleatórios
#Definir a faixa de idade
idadeMinima = int(input("Digite um número mínimo: "))
idadeMaxima = int(input("Digite um número máximo: "))
idade       = random.randint(idadeMinima, idadeMaxima)
#Definir o número de tentativas
tentativas = int(input("Quantas tentativas você deseja para acertar? ")) #Podemos fazer a verificação se o número é maior que zero
while tentativas > 0: #Se possível utilize sempre "()"
    palpite = int(input("Digite seu palpite: "))
    if palpite == idade:
        print("Você acertou!")
    
        break
    else:
        print("Você errou!")
        tentativas -= 1
        print("Você ainda tem: " + str(tentativas) + " tentativas!")
        

if tentativas == 0:
    print("Você perdeu")
    print("o número era:" + str(idade))