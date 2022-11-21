/*
    Entrada:
    Processamento:
    Saída:

    Exemplo:
*/
#include <stdio.h>
#include <assert.h>

double mediaAluno(double nota1, double nota2, double nota3) {

    double media;
    media = (nota1 + nota2 + nota3) / 3.0;
    return media;
}

void teste() {

    assert(mediaAluno(6.0,7.0,5.0)==6.0);
    printf("Testes executados com sucesso!\n");
}

void condicaoAluno(double media) {

    if (media >= 6.0) {
        printf("Aprovado!");
    } else {
        printf("Reprovou. Estude mais!");
    }
}

main() {

    teste();

    double nota1, nota2, nota3, media;

    printf("Digite a nota 1 do aluno: ");
    scanf("%lf", &nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%lf", &nota2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%lf", &nota3);

    media = mediaAluno(nota1, nota2, nota3);

    printf("Media do aluno: %.2lf\n", media);
    printf("Condicao do aluno: ");
    condicaoAluno(media);
}
