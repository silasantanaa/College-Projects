
idade = int(input("Digite a idade do Adotande"))
ascendente = str(input("O adotante é irmão ou ascendente?"))
adocacao = str(input("É Adoção Conjunta?"))
casado = str(input("Os adotantes são casados ou união estável?"))
adotando = int(input("Idade do Adotando"))
pais = str(input("Pais Desconhecidos ou Adotando Destituído do Poder Familiar?"))
consenti = str(input("Consentimento dos pais quando não desconhecidos?"))
consenti_adotando = str(input("Consentimento do adotando (se maior de doze anos de idade)?"))

if idade <= 17:
    print("Você não pode adotar!")
elif ascendente.lower() == "sim":
    print("Você não pode adotar!")
elif adocacao.lower() == "nao":
    print("Você não pode adotar!")
elif casado.lower() == "nao":
    print("Você não pode adotar!")
elif consenti.lower() == "nao":
    print("Você não pode adotar!")
elif idade <= adotando+16:
    print("há de ser, pelo menos, dezesseis anos mais velho do que o adotando.")
else:
    print("Parabéns, você pode adotar!!")

