#include <stdio.h>

double converte(double tempF, double tempC)
{
    tempC = (tempF - 32) * 5 / 9;

    return tempC;
}

 void condicaoClima(double tempC)
 {
    if (tempC < 17) {
        printf("TEMPERATURA = FRIO");
    } else if (tempC <= 25) {
        printf("TEMPERATURA = AGRADAVEL");
    } else {
        printf("TEMPERATURA = CALOR");
    }

 }

main() {

    double tempF, tempC;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &tempF);

    tempC = converte(tempF, tempC);

    printf("A temperatura convertida = %.2lf \n", tempC);

    condicaoClima(tempC);

}
