#include <stdio.h>

/*
Exemplos:

Entrada:
Processamento:
Sa�da:
*/

void notif(double a) {
    if (a>=0.3 && a<0.4) {
        printf("�ndice subiu para 0.3. As empresas do primeiro grupo est�o intimadas a suspenderem suas atividades.");
    }
    else if (a>=0.4 && a<0.5) {
        printf("�ndice subiu para 0.4. As empresas do primeiro e segundo grupo est�o intimadas a suspenderem suas atividades.");
    }
    else if (a>=0.5) {
        printf("�ndice subiu para 0.5. As empresas dos tr�s grupos est�o intimadas a suspenderem suas atividades.");
    }
}

int main() {

    double indice;

    printf("Insira o �ndice de polui��o medido: ");
    scanf("%lf", &indice);

    notif(indice);

    return 0;
}
