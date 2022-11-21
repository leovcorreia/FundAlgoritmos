#include <stdio.h>

typedef struct pessoa {
    // crie um tipo 'pessoa'
    int codigo;
    char endereco[50];
    char nome[50];
};

main () {

    struct pessoa cliente;

    printf("Digite o codigo do cliente: ");
    scanf("%d", &cliente.codigo);
    printf("Digite o nome do cliente: ");
    scanf("%s", &cliente.nome);
    printf("Digite o endereco do cliente: ");
    scanf("%s", &cliente.endereco);

    printf("Codigo do cliente: %d\n", cliente.codigo);
    printf("Nome do cliente: %s\n", cliente.nome);
    printf("Endereco do cliente: %s", cliente.endereco);

}
