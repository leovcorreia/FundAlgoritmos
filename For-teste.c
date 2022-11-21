#include <stdio.h>

main () {

    int par, numero;

    for(int i = 0; i < 5; i++) {

        printf("Digite o numero:");
        scanf("%d", &numero);
        if (numero%2 == 0) {
            par++;
        }

    }

    printf("Qtd numeros pares = %d", par);
}
