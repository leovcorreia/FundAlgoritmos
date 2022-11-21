#include <stdio.h>

main() {

    double tempoGasto, velMedia, distancia, consumo;

    printf("Digite o tempo gasto na viagem: ");
    scanf("%lf", &tempoGasto);
    printf("Digite a velocidade media da viagem: ");
    scanf("%lf", &velMedia);

    distancia = tempoGasto * velMedia;
    consumo = distancia / 12;

    printf("O consumo foi de %.2lf litros", consumo);
}
