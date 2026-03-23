def gerar_logs():
    i = 1
    while True:
        yield f"log {i}"
        i += 1


logs = gerar_logs()

for _ in range(5):
    print(next(logs))

"""
ANÁLISE:
Os dados são gerados sob demanda.

Isso evita armazenar tudo na memória,
impedindo consumo excessivo de RAM.
"""