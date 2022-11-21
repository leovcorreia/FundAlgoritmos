#include <stdio.h>
#include <string.h>

main () {

    int x;
    char nome1[50], nome2[50];

    printf("Digite o primeiro nome:");
    fgets(nome1, 50, stdin);
    printf("Digite o segundo nome:");
    fgets(nome2, 50, stdin);

    //x = strcmp(nome1, nome2);

    if (strcmp(nome1, nome2) == 0) {
        printf("Os nomes sao iguais!");
    } else {
        printf("Os nomes sao diferentes!");
    }

}
