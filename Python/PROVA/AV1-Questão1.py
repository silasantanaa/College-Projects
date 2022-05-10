import random
from time import sleep

def jogar():
    print("#" * 45)
    print("\t\t\t\tJogo\n")
    print("0-Pedra, 1-Spock, 2-Papel, 3-Lagarto, 4-Tesoura")
    print("#" * 45)
    escolha = {"pedra": 0,
               "spock": 1,
               "papel": 2,
               "lagarto": 3,
               "tesoura": 4}

    player_count = 0
    computer_count = 0
    empate = 0
    time = 0

    player = str(input("\nEscolha sua jogada:"))
    if player in escolha.keys():
        computer = random.randrange(0, 5)
        print("Você escolheu {} x Computador escolheu {}".format(escolha[player], computer))
    else:
        print("\n---->> Opção Inválida!! <<----\n")
        return jogar()

    calc = abs(escolha[player] - computer)
    rest = abs(calc % 5)
    computer_won = rest == 1 or rest == 2
    player_won = rest == 3 or rest == 4

    if computer_won:
        print("A máquina ganhou!")
        computer_count += 1

    elif player_won:
        print("Player ganhou!")
        player_count += 1

    else:
        print("Empate")
        empate += 1
    while True:
        pergunta = input("Você quer continuar jogando? (S)-Continua (N)-Sair")
        if pergunta == "N" or pergunta == 'n':
             print("Saindo em 3.")
             sleep(1)
             print("Saindo em 2.")
             sleep(1)
             print("Saindo em 1.")
             print()
             print("Você venceu {}, perdeu {} e empatou {} vezes!".format(player_count, computer_count, empate))
             break
        elif pergunta == 'S' or pergunta == 's':
            continue
        else:
            print("Opção Inválida")
jogar()

