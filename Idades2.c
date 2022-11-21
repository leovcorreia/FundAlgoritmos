/*
    Entrada:
    Processamento:
    Saída:

    Exemplo:
*/
#include <stdio.h>
#include <assert.h>

int calculoIdade(int anosVida, int mesesVida, int diasVida)
{
    int idadeFinal;

    idadeFinal = (anosVida * 365) + (mesesVida * 30) + diasVida;

    return idadeFinal;
}

void teste() {

    assert(calculoIdade(50, 8, 20)==18510);
    printf("Teste executado com sucesso!\n");

}

main() {

    teste();

    int anos, meses, dias;

    printf("Qual a sua idade em anos?");
    scanf("%d", &anos);
    printf("Qual a sua idade em meses?");
    scanf("%d", &meses);
    printf("Qual a sua idade em dias?");
    scanf("%d", &dias);

    printf("Voce ja viveu %d dias. Essa e a sua idade em dias!", calculoIdade(anos, meses, dias));

}
