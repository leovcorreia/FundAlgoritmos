#include <stdio.h>
#include <assert.h>

/*
Exemplos:   nota1 = 6, nota2 = 5, nota3 = 7 --> média aritmética = 6
            nota1 = 6, nota2 = 5, nota3 = 7 --> média ponderada = 6.1
            nota1 = 6, nota2 = 5, nota3 = 7 --> média harmônica = 5.8
Entrada: três notas de um aluno
Processamento: calcular a média aritmética, ponderada ou harmônica do aluno, dependendo de sua escolha
Saída: média aritmética/ponderada/harmônica
*/

double aritmetica(float a, float b, float c) {
    double media;
    media=(a+b+c)/3;
    return media;
}

double ponderada(float a, float b, float c) {
    double media;
    media=((3*a)+(3*b)+(4*c))/(3+3+4);
    return media;
}

double harmonica(float a, float b, float c) {
    double media;
    media=3/((1/a)+(1/b)+(1/c));
    return media;
}

void test1 (){
    assert(aritmetica(6,5,7)==6.0);
    printf("1 == successful\n");
}
void test2 (){
    assert(ponderada(6,5,7)==6.1);
    printf("2 == successful\n");
}
void test3 (){
    assert(harmonica(6,5,7)==5.8);
    printf("3 == successful\n");
}

int main() {

    test1();
    test2();
    test3();

    int opcao;
    float nota1, nota2, nota3;

    printf("Insira suas três notas, de 0.0 a 10.0, separadas por vírgula: ");
    scanf("%f, %f, %f", &nota1, &nota2, &nota3);

    printf("Você deseja calcular sua média aritmética (1), ponderada (2) ou harmônica (3)? ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Sua média aritmética é de %.2f.", aritmetica(nota1,nota2,nota3));
            break;
        case 2:
            printf("Sua média ponderada é de %f.", ponderada(nota1,nota2,nota3));
            break;
        case 3:
            printf("Sua média harmônica é de %.2f.", harmonica(nota1,nota2,nota3));
            break;
        default:
            printf("A opção inserida é incorreta...");
    }

    return 0;
}
