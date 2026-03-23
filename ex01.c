#include <stdio.h>

// Iterativo (eficiente)
int fib_iter(int n) {
    int a = 0, b = 1, temp;

    for(int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return (n == 0) ? 0 : b;
}

// Recursivo (ineficiente)
int fib_rec(int n) {
    if(n <= 1) return n;

    return fib_rec(n-1) + fib_rec(n-2);
}

/*
ANÁLISE:
A versão iterativa possui complexidade O(n).

A versão recursiva ingênua possui complexidade O(2^n),
pois recalcula os mesmos valores várias vezes.

Exemplo:
fib(5) chama fib(4) e fib(3),
mas fib(4) também chama fib(3) novamente.

Isso gera:
- Muitas chamadas de função
- Crescimento exponencial
- Alto uso da pilha (stack frames)
*/

int main() {
    printf("Iterativo: %d\n", fib_iter(40));
    printf("Recursivo: %d\n", fib_rec(40));
}