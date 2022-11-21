/*
Exemplo1: media = 4.5 --> "Sua classificação = D"
Exemplo2: media = 6.7 --> "Sua classificação = C"
Exemplo3: media = 8.3 --> "Sua classificação = B"
Exemplo4: media = 9.4 --> "Sua classificação = A"

Entrada: valor da média do aluno
Processamento: verificar em qual conceito a média do aluno se enquadra
Saída: retornar para o usuário qual o conceito que o aluno se encontra, de acordo com a média inserida
*/
#include <stdio.h>

void average(double media)
{
    if (media < 5.0) {
        printf("Sua classificacao = D");
    } else if (media < 7.0) {
            printf("Sua classificaçao = C");
    } else if (media < 9.0) {
            printf("Sua classificaçao = B");
    } else {
        printf("Sua classificaçao = A");
    }
}

int main() {

    double media;

    printf("Digite a media do aluno:");
    scanf("%lf", &media);

    average(media);

    return 0;
}
