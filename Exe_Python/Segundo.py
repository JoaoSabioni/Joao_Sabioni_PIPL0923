#Ler 10 números, e determinar se o número par e número impar.

total = 0

while total < 10:
    num = int(input("Intrud um número: "))

    if num % 2 == 0:
        print("Numero Par")
    else:
        print("Numero Impar")

    total = total + 1
