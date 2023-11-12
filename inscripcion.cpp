#include <stdio.h>

int main() {
    char respuesta;
    printf("Eres estudiante (s/n): ");
    scanf(" %c", &respuesta);

    if (respuesta == 's' || respuesta == 'S') {
        printf("Tu inscripción es de 150 y la mensualidad de 75.\n");
    } else if (respuesta == 'n' || respuesta == 'N') {
        printf("Tu inscripción es de 300 y la mensualidad de 150.\n");
    }
    return 0;
}
