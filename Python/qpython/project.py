# Vou tentar criar um software

from time import sleep


def Welcome():
    print("#"*25)
    print("Bem-Vindo ao programa")
    print("#"*25)
    
def WelcomeTwo():
    print("#"*25)
    print("Bem-Vindo ao sistema")
    print("#"*25)    

def Cadastro():
    nome = input("Digite seu nome:")
    idade = int(input("Digite sua idade:"))
    print("Olá,", nome, "você tem:", idade, "anos!")
    while idade <=17:
        print("Proibido para menos de 18 anos")
        print("Saindo em 3")
        sleep(1)
        print("Saindo em 2")
        sleep(1)
        print("Saindo em 1")
        exit()
       
    else:
           print()
           print("Voce será direcionado para o menu.")
           print()
 
loop = 0

            
Welcome()
Cadastro()

while loop != str:
    
    print("#"*25)
    print("Bem-Vindo ao menu")
    print("#"*25)
    print()
    
    print("1-Criar Usuário.")
    print("2-Logar.")
    print("3-Sair.")
    print()
    opcao = int(input("Opção:"))
    if opcao == 3:
        print("Saindo em 3")
        sleep(1)
        print("Saindo em 2")
        sleep(1)
        print("Saindo em 1")
        sleep(1)
        break
    elif opcao == 1:
        user = str(input("Digite o nome do usuário:"))
        password = int(input("Digite sua senha:"))
        passwordCheck = int(input("Digite sua senha novamente:"))
        if password != passwordCheck:
            print("As senhas não são iguais!")
        else:
            print("Olá,", user, "conta criada!")
    elif opcao == 2:
        count = 0
        while count <=2:
            count+=1
            userCheck = str(input("Digite seu user:"))
            passwordUser = int(input("Digite sua password:"))
            if user == userCheck and password == passwordUser:
                print("Olá", user, "logado com sucesso")
            else:
                print("User or Password wrong")
                
    else:
        print()
        print("Opção Inválida!")
        print()
        

            
            

