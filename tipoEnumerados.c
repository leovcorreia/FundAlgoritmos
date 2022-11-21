#include <stdio.h>
#include <assert.h>

enum classificacao {par, impar};

enum classificacao condicao (int numero) {

    if (numero % 2 == 0) {
        return par;
    } else {
        return impar;
    }

}

void teste() {

    assert(condicao(2)==par);
    assert(condicao(3)==impar);
    printf("TESTES EXECUTADOS COM SUCESSO!\n");

}

main() {

    int numero;
    enum classificacao result;

    teste();

    printf("Digite um numero: ");
    scanf("%d", &numero);
    result = condicao(numero);

    if (result == par) {
         printf("O NUMERO DIGITADO E: PAR");
    } else if (result == impar) {
         printf("O NUMERO DIGITADO E: IMPAR");
    }

}
