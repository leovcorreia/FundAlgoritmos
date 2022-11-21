/*
    Entrada:
    Processamento:
    Saída:

    Exemplos:
*/

#include <stdio.h>
#include <assert.h>
double custoFinalCarro(double custoDeFabrica)
{
    double porcDistribuidor = 28 / 100.0;
    double porcImposto = 45 / 100.0;

    double custoFinal = custoDeFabrica + (custoDeFabrica * porcDistribuidor) + (custoDeFabrica * porcImposto);
    return custoFinal;
}

void teste() {

    assert(custoFinalCarro(50000)==86500);
    assert(custoFinalCarro(30000)==51900);
    printf("Deu certo!\n");
}

int main() {

    teste();

    double custoFabrica;

    printf("Digite o custo de fabrica: ");
    scanf("%lf", &custoFabrica);

    printf("O custo final do carro = %.2lf", custoFinalCarro(custoFabrica));
}
