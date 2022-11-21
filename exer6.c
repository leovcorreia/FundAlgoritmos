#include <stdio.h>

/*
Exemplos:

Entrada:
Processamento:
Saída:
*/

void notif(double a) {
    if (a>=0.3 && a<0.4) {
        printf("Índice subiu para 0.3. As empresas do primeiro grupo estão intimadas a suspenderem suas atividades.");
    }
    else if (a>=0.4 && a<0.5) {
        printf("Índice subiu para 0.4. As empresas do primeiro e segundo grupo estão intimadas a suspenderem suas atividades.");
    }
    else if (a>=0.5) {
        printf("Índice subiu para 0.5. As empresas dos três grupos estão intimadas a suspenderem suas atividades.");
    }
}

int main() {

    double indice;

    printf("Insira o índice de poluição medido: ");
    scanf("%lf", &indice);

    notif(indice);

    return 0;
}
