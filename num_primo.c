#include <stdio.h>

int main () {

    int num, i, result;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        result = 0; /*Não é primo*/
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                result = 0; /*Não é primo*/
            } else {
                result = 1;
            }
        } 
    }

    if (result == 0) {
        printf("O numero %d nao eh primo! ", num);
    } else {
        printf("O numero %d eh primo! ", num);
    }
    
}