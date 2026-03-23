#include <stdio.h>

void contagem_infinita(int n) {
    printf("%d\n", n);
    contagem_infinita(n-1); // sem caso base
}

/*
ANÁLISE:
Sem condição de parada, a função chama a si mesma indefinidamente,
criando novos stack frames até estourar a pilha (Stack Overflow).
*/

void contagem_corrigida(int n) {
    if(n == 0) return;

    printf("%d\n", n);
    contagem_corrigida(n-1);
}

int main() {
    // contagem_infinita(5); // causa erro

    contagem_corrigida(5);
}