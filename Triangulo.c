/*
Exemplo1: x=4; y=5; z=10 --> "Nao sera possivel formar esse triangulo"
Exemplo2: x=4; y=5; z=8 --> "O triangulo é  escaleno"
Exemplo3: x=4; y=4; z=7 --> "O triangulo é isosceles"
Exemplo4: x=4; y=4; z=4 --> "O triangulo é equilátero"

Entrada: entrar com os valores x, y, z
Processamento: verificar se é possível formar o triangulo, caso for, ver se é equilátero, isósceles, escaleno
Saída: mostrar se é possível formar o triangulo, se for, mostrar se é equilátero, isósceles, escaleno
*/
#include <stdio.h>

int condicaoTriangulo(int x, int y, int z)
{
    double maior, menor1, menor2;

    if ((x > y) && (x > z)) {
        maior = x;
        menor1 = y;
        menor2 = z;
    } else if (y > z) {
        maior = y;
        menor1 = x;
        menor2 = z;
    } else {
        maior = z;
        menor1 = x;
        menor2 = y;
    }

    if (maior < menor1 + menor2) {
        return 1;
    } else {
        return 0;
    }
}

void tipoTriangulo(int x, int y, int z) {
     if ((x == y) && (y == z)) {
            printf("ESSE TRIANGULO E EQUILATERO");
        } else if ((x == y) || (x == z)){
            printf("ESSE TRIANGULO E ISOSCELES");
        } else if ((y == x) || (y == z)) {
            printf("ESSE TRIANGULO E ISOSCELES");
        } else if ((x != y) && (y != z)) {
            printf("ESSE TRIANGULO E ESCALENO");
        }
}

int main(){

    double x, y, z, maior, menor1, menor2;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    printf("Digite o valor de Y: ");
    scanf("%lf", &y);
    printf("Digite o valor de Z: ");
    scanf("%lf", &z);

    // fiz o teste para verificar se é possivel formar o triangulo de acordo com a propriedade

    // fiz o teste para ver qual o tipo de triangulo

    if (condicaoTriangulo(x,y,z) == 1) {
        tipoTriangulo(x,y,z);
    } else {
        printf("NAO SERA POSSIVEL FORMAR ESSE TRIANGULO ");
    }
    return 0;
}
