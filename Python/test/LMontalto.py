costituzione_words = []
with open('/Users/monti/Documents/Informatica/Python/test/testo.txt') as infile:    # apro il file interessato
        for word in infile:                 # ciclo attraverso il file aperto
            if word.strip():                # se con il metodo strip di words ottengo qualcosa =! 0 eseguo
                costituzione_words.append(word.strip())     # aggiungo alla lista il risultato di strip su word
	
word_count={}                               # definisco una var di tipo dict
for word in costituzione_words:             # ciclo per ogni parola appartenente alla lisra
	count = word_count.setdefault(word,0)   # ottengo il valore della key 'word', se 'word' non esiste la crea e assegna il valore 0 che sarà poi assegnato a count
	count += 1                              # aumento count di 1
	word_count[word] +=1                    # aumento di 1 il valore della key word
word_list = list(word_count.items())        # creiamo una lista con items gli items del dict
word_list.sort(key=lambda x: x[1])          # ordiniamo la lista secondo la funzione che restituisce il valore di indice 1 nella lista
print("Most common words:")                 # stampiamo allo stdout quessta frase
for word in reversed(word_list[-10:]):      # cicliamo attarverso i primi 10 elementi della lista che è stata invertita
    print(word)                             # stampiamo gli items della lista

print("\nLeast common words:")              # stampiamo allo stdout quessta frase
for word in word_list[:10]:                 # cicliamo attraverso gli ultimi 10 elementi della lista
	print(word)                             # stampimao gli items della lista
