/*
Exemplo1: media = 4.5 --> "Sua classifica��o = D"
Exemplo2: media = 6.7 --> "Sua classifica��o = C"
Exemplo3: media = 8.3 --> "Sua classifica��o = B"
Exemplo4: media = 9.4 --> "Sua classifica��o = A"

Entrada: valor da m�dia do aluno
Processamento: verificar em qual conceito a m�dia do aluno se enquadra
Sa�da: retornar para o usu�rio qual o conceito que o aluno se encontra, de acordo com a m�dia inserida
*/
#include <stdio.h>

void average(double media)
{
    if (media < 5.0) {
        printf("Sua classificacao = D");
    } else if (media < 7.0) {
            printf("Sua classifica�ao = C");
    } else if (media < 9.0) {
            printf("Sua classifica�ao = B");
    } else {
        printf("Sua classifica�ao = A");
    }
}

int main() {

    double media;

    printf("Digite a media do aluno:");
    scanf("%lf", &media);

    average(media);

    return 0;
}
