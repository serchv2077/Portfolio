#include <stdio.h>

int main() {
    float dolar = 17.48;
    float peso;
    float conversion;

    printf("Cuantos pesos quieres convertir? ");
    scanf("%f", &peso);

    conversion = peso / dolar;

    printf("La conversion es: %f\n", conversion);

    return 0;
}
