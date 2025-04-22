#criar menu com 3 opções
# 1 - Intruduzir nomes
# 2 - Listar nomes na lista
# 3 - Parar programa
noms = []
para = True

while para:
    print("\nMenu:")
    print("1 - Intruduzir nomes")
    print("2 - Listar nomes na lista")
    print("3 - Parar programa")
    
    opcao = input("Escolhe uma opção (1, 2, 3): ")

    if opcao == "1":
        noms.append(input("Intrud Novo Nome: "))

    elif opcao == "2":
        print("Nomes na lista:", noms)

    elif opcao == "3":
        para = False

    else:
        print("Opção invalida.")

print("Bye - Bye")

