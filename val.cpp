#include <stdio.h>

int main() {
    int suma = 0; // Inicializa suma a 0
    int num;     // variable local para comparaci�n
    int y;       // variable para almacenar la entrada del usuario

    printf("Ingresa n�meros para sumar. Ingresa un n�mero no entero para salir.\n");

    while (1) {
        printf("Ingresa un n�mero entero: ");
        if (scanf("%d", &y) != 1) {
            printf("Tu dato no es v�lido. Debes ingresar un n�mero entero.\n");
            // Limpia el b�fer de entrada
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
