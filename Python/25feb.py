ltup = []
lnum = []
lpar = []

flag = True

while flag:
	try:
		n = int(input('intero '))
		p = input('parola')
		#  controllo inserimento dato già presente

		if (n in lnum) or (p in lpar):  # controllo se sono già presenti
			if len(ltup) < 5:
				print('dato già inserito, ripeti')
			else:
				print('dato già inserito, l>4, esco')
				flag = False

		else:  # se condizioni rispettate, allora posso andare avanti
			lnum.append(n)
			lpar.append(p)
			ltup.append((n, p))
			print(ltup)
			if len(ltup) > 9:  # limito a 10 tuple nella lista
				flag = False

	except ValueError:
		print('riprova con un intero')


def func(a):
	diz = {}
	for t in a:
		diz[t[1]] = t[0]
	return diz


print(func(ltup))
