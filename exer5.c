#include <stdio.h>
#include <assert.h>

/*
Exemplos:   nota1 = 6, nota2 = 5, nota3 = 7 --> m�dia aritm�tica = 6
            nota1 = 6, nota2 = 5, nota3 = 7 --> m�dia ponderada = 6.1
            nota1 = 6, nota2 = 5, nota3 = 7 --> m�dia harm�nica = 5.8
Entrada: tr�s notas de um aluno
Processamento: calcular a m�dia aritm�tica, ponderada ou harm�nica do aluno, dependendo de sua escolha
Sa�da: m�dia aritm�tica/ponderada/harm�nica
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

    printf("Insira suas tr�s notas, de 0.0 a 10.0, separadas por v�rgula: ");
    scanf("%f, %f, %f", &nota1, &nota2, &nota3);

    printf("Voc� deseja calcular sua m�dia aritm�tica (1), ponderada (2) ou harm�nica (3)? ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Sua m�dia aritm�tica � de %.2f.", aritmetica(nota1,nota2,nota3));
            break;
        case 2:
            printf("Sua m�dia ponderada � de %f.", ponderada(nota1,nota2,nota3));
            break;
        case 3:
            printf("Sua m�dia harm�nica � de %.2f.", harmonica(nota1,nota2,nota3));
            break;
        default:
            printf("A op��o inserida � incorreta...");
    }

    return 0;
}
