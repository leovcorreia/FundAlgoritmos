#include <stdio.h>

int verificaPrimo(int num) {

    int i;

    if (num <= 1) {
        return 0; /*Não é primo*/
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return 0; /*Não é primo*/
            }
        } 
    }

    return 1; // Se não encontrar nenhum divisor, número é primo
}

int main () {

    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if (verificaPrimo(num)) {
        printf("O numero %d eh primo!", num);
    } else {
        printf("O numero %d nao eh primo!", num);
    }

    return 0;    
}