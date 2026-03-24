#include <stdio.h>

void alterar_valor(int saldo) {
    saldo += 500;
}

void alterar_referencia(int *saldo) {
    *saldo += 500;
}

/*
ANÁLISE:
Na passagem por valor, o parâmetro recebe uma cópia do valor original.
Assim, alterações afetam apenas a cópia local.

Na passagem por referência (ponteiro),
passamos o endereço da variável,
permitindo alterar diretamente o valor original.
*/

int main() {
    int saldo_bancario = 1000;

    alterar_valor(saldo_bancario);
    printf("Após valor: %d\n", saldo_bancario);

    alterar_referencia(&saldo_bancario);
    printf("Após referência: %d\n", saldo_bancario);
}