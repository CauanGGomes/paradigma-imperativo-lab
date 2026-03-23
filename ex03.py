# CÓDIGO ESPAGUETE (ruim)
sal1 = 2000
sal2 = 3000
sal3 = 2500

print("Salário 1:", sal1 + sal1*0.1)
print("Salário 2:", sal2 + sal2*0.1)
print("Salário 3:", sal3 + sal3*0.1)


# REFATORADO

def calcular_salario(salario):
    return salario * 1.1  # função pura


def imprimir_salario(nome, salario):
    print(f"{nome}: {salario}")  # procedimento


print("\nRefatorado:")
imprimir_salario("Func1", calcular_salario(2000))
imprimir_salario("Func2", calcular_salario(3000))
imprimir_salario("Func3", calcular_salario(2500))