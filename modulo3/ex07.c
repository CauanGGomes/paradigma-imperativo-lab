#include <stdio.h>

void contagem_infinita(int n) {
    printf("%d\n", n);
    contagem_infinita(n - 1); // sem caso base → erro
}

int main() {
    contagem_infinita(100000); // vai estourar a pilha
    return 0;
}