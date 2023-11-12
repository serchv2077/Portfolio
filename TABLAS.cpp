#include <stdio.h>  // LIBRERIA

int main() {
    int resultado;      // VARIABLES
    int n, m;

    for (n = 1; n <= 10; n += 1) {        // CICLO FOR HASTA 10
        for (m = 1; m <= 10; m += 1) {
            resultado = n * m;
            printf("%d : ", resultado); // RESULTADO
        }
        printf("\n");     //para hacer cada for en new line
    }

    return 0;
}
