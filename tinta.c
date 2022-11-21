#include <stdio.h>

main() {

    double larguraMaior, larguraMenor, altura, somaArea, tinta;
    double area1, area2, area3, soma;

    printf("Digite o valor da largura maior: ");
    scanf("%lf", &larguraMaior);
    printf("Digite o valor da largura menor: ");
    scanf("%lf", &larguraMenor);
    printf("Digite o valor da altura da parede: ");
    scanf("%lf", &altura);

    area1 = larguraMenor * altura * 2;
    area2 = larguraMaior * altura * 2;
    area3 = larguraMenor * larguraMaior;
    soma = area1 + area2 + area3;

    printf("A soma das areas = %.2lf", soma);

    tinta = soma / 12;

    printf("\nSerao necessarias %.2lf latas de tinta", tinta);

    return 0;
}
