import ply.lex as lex

palabrasReservadas = {
	'si' : 'SI',
	'apagate' : 'APAGAR',
	'avanza':'AVANZAR',
	'coge-zumbador':'COGER',
	'deja-zumbador':'DEJAR',
	'inicio':'INICIAR',
	'y':'Y',
	'o':'O',
	'entonces' : 'ENTONCES',
	'sino' : 'SINO',
	'mientras' : 'MIENTRAS',
	'hacer' : 'HACER',
	'repetir' : 'ITERACION',
	'veces' : 'VECES',
	'fin' : 'FIN'
}

tokens = ['ID','INS_COMPLETA','GUION','NUMERO']

tokens = tokens + list(palabrasReservadas.values())

t_ignore = ' \t'
t_INS_COMPLETA = '\;'
t_GUION = '\-'
t_ignore_COMMENT = r'\{.*'

def t_ID(t):
    r'[-a-zA-Z][-a-zA-Z]*'
    t.type = palabrasReservadas.get(t.value,'ID')
    return t
	
def t_SALTOLINEA(t):
    r"\n+"
    t.lexer.lineno += len(t.value)
	
def t_NUMERO(t):
    r'\d+'
    t.value = int(t.value)
    return t

def t_error(t):
    print("ERROR -> %s" % t.value)
    t.lexer.skip(1)

if __name__ == "__main__":
	lex.lex()
	f = open ('codigoKarel.in','r')
	pf = f.read()
	f.close()
	lex.input(pf)
	while True:
		tok = lex.token()
		if not tok: break
		print (str(tok.type) + ' < ' + str(tok.value) + ' >')