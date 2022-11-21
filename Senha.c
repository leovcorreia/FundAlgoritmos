/*
Exemplos:
   - senha: 1234 --> "Acesso autorizado"
   - senha: 1233 --> "Senha incorreta"

Entrada: senha
Processamento: Comparar a senha com o valor 1234
Saída: "Acesso autorizado" ou "Senha incorreta"
*/
#include <stdio.h>
#include <assert.h>

void password (int senha)
{
    if (senha != 1234) {
        printf("Senha incorreta. Tente novamente! ");
    } else {
        printf("Acesso autorizado!");
    }

}

main() {

    int senha;

    printf("Qual a senha do sistema? ");
    scanf("%d", &senha);

    password(senha);

    return 0;
}
