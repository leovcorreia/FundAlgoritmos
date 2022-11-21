#include <stdio.h>

main () {

    int x, y;
    char nome1[50], nome2[50];

    printf("Digite o nome da primeira pessoa: ");
    fgets(nome1, 50, stdin);
    printf("Digite o nome da segunda pessoa: ");
    fgets(nome2, 50, stdin);

    x = strlen(nome1) -1;
    y = strlen(nome2) - 1;

    if (x > y) {
        printf("O primeiro nome e maior que o segundo!");
    } else if (y > x) {
        printf("O segundo nome e maior que o primeiro!");
    } else {
        printf("Sao iguais! ");
    }

    printf("\n");
    printf("%d, %d", x, y);

}
