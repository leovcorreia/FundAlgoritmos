/*
Exemplos:
   idade1 = 3; idade2 = 7; idade3 = 4; idade4 = 6 --> maior idade = 7

Entrada: idade de cada uma das 4 pessoas
Processamento: comparar cada uma dessas idades e ver qual é a mais velha usando if/else
Saída: informar a idade da pessoa mais velha
*/
#include <stdio.h>

int maiorIdadeCalculo(int idade1, int idade2, int idade3, int idade4)
{
    int maiorIdade = idade1;

    if (idade2 > maiorIdade) {
        maiorIdade = idade2;
    }
    if (idade3 > maiorIdade) {
        maiorIdade = idade3;
    }
    if (idade4 > maiorIdade) {
        maiorIdade = idade4;
    }

    return maiorIdade;
}

main (){

    int idade1, idade2, idade3, idade4, maiorIdade;
    double media;

    printf("Informe a idade da pessoa 1: ");
    scanf("%d", &idade1);
    printf("Informe a idade da pessoa 2: ");
    scanf("%d", &idade2);
    printf("Informe a idade da pessoa 3: ");
    scanf("%d", &idade3);
    printf("Informe a idade da pessoa 4: ");
    scanf("%d", &idade4);

    maiorIdade = maiorIdadeCalculo(idade1,idade2,idade3,idade4);

    printf("\nA maior idade = %d", maiorIdade);

}
