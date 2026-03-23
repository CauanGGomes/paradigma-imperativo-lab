#include <stdio.h>

/*
ANÁLISE:
O uso de estruturas gigantes com múltiplos dados compartilhados
gera alto acoplamento entre funções.

Problemas:
- Muitas dependências
- Difícil manutenção
- Risco de corrupção de estado

Isso justifica o uso de encapsulamento (POO).
*/

typedef struct {
    int pacientes[100];
    int medicos[50];
    int leitos;
    float caixa;
} SistemaHospitalar;

void realizar_internacao(SistemaHospitalar *s) {
    if(s->leitos > 0) {
        s->leitos--;
        s->caixa += 500;
    }
}

int main() {
    SistemaHospitalar s = { .leitos = 10, .caixa = 1000 };

    realizar_internacao(&s);

    printf("Leitos restantes: %d\n", s.leitos);
    printf("Caixa: %.2f\n", s.caixa);
}