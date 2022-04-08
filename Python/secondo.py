# Scrivere una funzione che accetti in ingresso una lista i cui elementi sono frasi (ad es.
# ['ciao pino a dopo','fuori piove tanto','vengo dopo a pranzo', ... ])
# e restituisca un dizionario in cui le chiavi sono le parole di tutte le frasi prese insieme e i valori sono  
# dati dal numero di volte in cui la parola viene trovata (le occorrenze delle singole parole).

def secondo():
    list = []
    flag = True
    dict = {}

    while flag:
        ins = input('Inserisci: ')
        if ins != '':
            list.append(ins)
        else:
            flag = False
