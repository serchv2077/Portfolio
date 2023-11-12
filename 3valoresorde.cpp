#include <stdio.h>  // entrada y salida de datos

int main() {
    float a, b, c;  // los valores que le vamos a pedir
    printf("Valor 1: ");  // le pregiuntamos los valores individuales.
    scanf("%f", &a);   // leer el valor
    printf("Valor 2: ");
    scanf("%f", &b);
    printf("Valor 3: ");
    scanf("%f", &c);

    if (b > a && a > c) {   // rangos donde buscamos encontar el que sea mayor.
        printf("%f, %f, %f\n", c, a, b);
    } else {
        if (c > a && a > b) {
            printf("%f, %f, %f\n", c, a, b);
        } else {
            if (a > b && b > c) {
                printf("%f, %f, %f\n", c, b, a);
            } else {
                if (a > c && c > b) {
                    printf("%f, %f, %f\n", b, c, a);
                } else {
                    if (c > a && a > b) {
                        printf("%f, %f, %f\n", b, a, c);
                    } else {
                        printf("%f, %f, %f\n", a, b, c);
                    }
                }
            }
        }
    }
    return 0;
}
