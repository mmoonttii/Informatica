# Scrivere il codice di un programma che chieda all’utente di inserire una serie di stringhe (frasi)
#  da memorizzare all’interno di una lista (ogni frase e’ un elemento della lista).
#  L’inserimento deve terminare se l’utente inserisce due frasi con la stessa parola iniziale,
#  altrimenti quando sono state inserite un massimo di 8 frasi.

def uno():
    list = []
    flag = True
    while flag:
        if len(list) < 8:
            ins = input('Inserisci:')
            
            list.append(ins)
            print(list)
        else:
            flag = False