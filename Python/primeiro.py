noms =[]
para = True

while para:
    DEC = input("Quer continuar S ou N: ")
    if DEC == "S":
            para = False
            continue
    
noms.append(input("Intrud Novo Nome: "))

print(noms)

'''Exemplos'''

while True:
    DEC = input("Quer continuar S ou N: ")
    if DEC == "S" or DEC == "s":
            break
    
noms.append(input("Intrud Novo Nome: "))

print(noms)

