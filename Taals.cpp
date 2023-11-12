#include <stdio.h>

int main() {
    int resultado;
    int n, m;

    for (n = 1; n <= 10; n += 1) {
        for (m = 1; m <= 10; m += 1) {
            resultado = n * m;
            printf("%d : ", resultado);
        }
        printf("\n");
    }

    return 0;
}
