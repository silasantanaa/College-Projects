import random
from time import sleep

def jogar():
    print("#" * 45)
    print("\t\t\t\tJogo")
    print("#" * 45)

    player = 0
    computer_count = 0
    player_count = 0
    empate = 0
    time = 1
    escolha = {"pedra": 0,
               "spock": 1,
               "papel": 2,
               "lagarto": 3,
               "tesoura": 4}

    while player != str:
        print("0-Pedra, 1-Spock, 2-Papel, 3-Lagarto, 4-Tesoura")
        player = str(input("\nEscolha sua jogada:"))
        computer = random.randrange(0, 5)
        print("Você escolheu {} x Computador escolheu {}".format(escolha[player], computer))

        calc = escolha[player] - computer
        rest = abs(calc % 5)
        won = rest == 3 or rest == 4
        lose = rest == 1 or rest == 2

        print("O resto é:{}".format(rest))
        if lose:
            computer_count += 1
            print("O Computador Ganhou!\n")
        elif won:
            player_count += 1
            print("Você Ganhou!\n")
        else:
            empate += 1
            print("Empate!\n")

        pergunta = str(input("Você quer continuar jogando? (S)-Continua (N)-Sair"))
        print()
        if pergunta == "S" or pergunta == "s":
            time += 1
            continue
        elif pergunta == "N" or pergunta == "n":
            result = abs(float(player_count / time))
            result = float(int(result * 100))
            print("Saindo em 3.")
            sleep(1)
            print("Saindo em 2.")
            sleep(1)
            print("Saindo em 1.")
            print()
            print("Venceu: {}, empatou: {},  perdeu: {}".format(player_count, empate, computer_count))
            print("A sua percentagem de vitória: {}%".format(result))
            break
        else:
            print("Opção Inválida")
jogar()