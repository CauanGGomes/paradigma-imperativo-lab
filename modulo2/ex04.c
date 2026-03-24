#include <stdio.h>

int calcular_altitude(int atual) {
    return atual + 100; // seguro (sem alterar original)
}

void alterar_altitude(int *altitude) {
    *altitude += 100; // efeito colateral
}

/*
ANÁLISE:
A função retorna um novo valor sem modificar o estado original.

Já o procedimento usa ponteiro e altera diretamente a variável,
gerando efeito colateral (mudança de estado fora da função).
*/

int main() {
    int altitude = 1000;

    int nova = calcular_altitude(altitude);
    printf("Original: %d | Nova: %d\n", altitude, nova);

    alterar_altitude(&altitude);
    printf("Após efeito colateral: %d\n", altitude);
}