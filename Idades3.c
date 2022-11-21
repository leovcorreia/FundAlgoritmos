/*
    Entrada:
    Processamento:
    Saída:

    Exemplo:
*/
#include <stdio.h>
#include <assert.h>

main() {

    int diasVida, anos, meses, diasMeses, dias;

    printf("Voce tem quantos dias de vida?");
    scanf("%d", &diasVida);

    anos = diasVida / 365;
    //para calcular meses, tenho q fazer a quantidade de dias em anos, menos a qtd de dias de vida, obtendo o "resto" dos dias em relação aos meses e dias
    //depois faço esse valor divido por 30 para obter os meses
    meses = (diasVida - (anos * 365)) / 30;
    //para calcular dias, pega a qtd de dias que formou os anos e a qtd de dias que formou os meses, soma esse dois valores e faz menos o total de dias de vida
    dias = diasVida - ((anos * 365) + (meses * 30));

    printf("Sua idade em anos: %d\n", anos);
    printf("Sua idade em meses: %d\n", meses);
    printf("Sua idade em dias: %d", dias);

}
