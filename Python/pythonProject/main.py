
i = 0

print('#' * 30)
print("Welcome come the menu")
print('#' * 30)

while i != 1000:

    print("1- Cria Login")
    print("2- Cadastro")
    print("3- Fazer Calculo")
    print("4- Saber sua idade")
    print("5- Sair")
    print("")

    i = int(input("Digite um número:"))

    if i == 1:
        nome = str(input("Digite o seu nome:"))
        nomeConfirm = str(input("Digite novamente o seu nome:"))
        if nome == nomeConfirm:
            print("Usuário criado com sucesso!")
        else:
            print("O nomes inseridos não são iguais!")
            break
        password = int(input("Digite sua senha:"))
        passConfirm = int(input("Digite novamente sua senha:"))
        if password == passConfirm:
            print("Senha Validada Com Sucesso!")
        else:
            print("As senhas inseridas não são iguais!")
    elif i == 3:
        num = int(input("Digite seu 1º número"))
        numTwo = int(input("Digite seu  2º número"))
        result = num + numTwo
        print("Resultado:{}".format(result))


    elif i == 4:
        ano = int(input("Digite seu ano de nascimento:"))
        soma = ano-2021

    elif i == 5:
        print("Saindo em 3")
        print("Saindo em 2")
        print("Saindo em 1")
        break

    else:
        print("\nOpção Inválida")
