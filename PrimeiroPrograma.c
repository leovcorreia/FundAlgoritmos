#include <stdio.h>

main ()
{
    double nota1;

    printf("Digite a nota do aluno: ");
    scanf("%lf", &nota1);

    if (nota1 >= 6.0) {
        printf("Voce foi aprovado!");
    } else {
        printf("Voce NAO foi aprovado! Estude mais! ");
    }

    return 0;
}
