#include <stdio.h>

int main() {
    int suma = 0; // Inicializa suma a 0
    int num;     // variable local para comparación
    int y;       // variable para almacenar la entrada del usuario

    printf("Ingresa números para sumar. Ingresa un número no entero para salir.\n");

    while (1) {
        printf("Ingresa un número entero: ");
        if (scanf("%d", &y) != 1) {
            printf("Tu dato no es válido. Debes ingresar un número entero.\n");
            // Limpia el búfer de entrada
            while (getchar() != '\n');
        } else {
            suma += y;
        }

        if (suma >= 100) {
            break;
        }
    }

    printf("La suma total es: %d\n", suma);

    return 0;
}
