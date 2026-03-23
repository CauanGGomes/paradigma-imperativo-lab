def linha_montagem():
    peca = 1

    while True:
        yield f"Peça {peca} processada"
        peca += 1


linha = linha_montagem()

print(next(linha))
print(next(linha))
print(next(linha))

"""
ANÁLISE:
O yield pausa a execução e salva o estado da função.

Diferente de funções normais (run-to-completion),
a execução continua de onde parou.
"""