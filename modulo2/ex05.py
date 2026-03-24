def aplicar_desconto(estoque):
    for i in range(len(estoque)):
        estoque[i] -= 10

estoque = [100, 200, 300]

aplicar_desconto(estoque)

print("Estoque:", estoque)

"""
ANÁLISE:
Python usa call-by-sharing.

A lista não é copiada, apenas a referência é passada.
Como listas são mutáveis, alterações dentro da função
afetam diretamente o objeto original.
"""