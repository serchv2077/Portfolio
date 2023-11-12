#include <stdio.h>
#include <stdlib.h>          //librerias utilizadas
#include <stdbool.h>
#include <ctype.h>

float x, y;              //variales con decimales
int z;
char opcion;     // para validar opciones

bool esNumero(char *str) {                         // validacion de numeros
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

char menu() {                                     //  funsion para dar la opciones
    printf("Cual es tu opcion:\n1. suma\n2. resta\n3. multiplicacion\n4. division\n5. factorial\n6. Exit\n");
    if (scanf(" %c", &opcion) != 1 || !isdigit(opcion)) {                        // para el caso que se ingrese un caracter
        printf("Entrada no valida. Debes ingresar un número o una opción válida.\n");
        opcion = 'c'; // Retorna 'c' para indicar una entrada no válida
    } else {
        switch (opcion) {
            case '1':
                printf("Dame dos numeros para sumar: ");        // las opciones
                if (scanf("%f%f", &x, &y) != 2) {
                    printf("Entrada no valida. Debes ingresar numeros.\n");
                    opcion = 'c'; // Retorna 'c' para indicar una entrada no válida
                }
                break;
            case '2':
                printf("Dame dos numeros para restar: ");
                if (scanf("%f%f", &x, &y) != 2) {
                    printf("Entrada no valida. Debes ingresar numeros.\n");
                    opcion = 'c';
                }
                break;
            case '3':
                printf("Dame dos numeros para multiplicar: ");
                if (scanf("%f%f", &x, &y) != 2) {
                    printf("Entrada no valida. Debes ingresar numeros.\n");
                    opcion = 'c';
                }
                break;
            case '4':
                printf("Dame dos numeros para dividir: ");
                if (scanf("%f%f", &x, &y) != 2) {
                    printf("Entrada no valida. Debes ingresar numeros.\n");
                    opcion = 'c';
                }
                if (y == 0) {
                    printf("No se puede dividir por cero.\n");
                    opcion = 'c';
                }
                break;
            case '5':
                printf("Dame un numero para calcular el factorial: ");
                char input[50];
                scanf("%s", input);
                if (!esNumero(input)) {
                    printf("Entrada no valida. Debes ingresar un numero entero.\n");
                    opcion = 'c';
                }
                z = atoi(input);
                break;
            case '6':
                printf("Saliendo del programa...\n");
                exit(0);
                break;
            default:
                printf("Opcion no valida\n");
                opcion = 'c';
        }
    }
    return opcion;  // salida de la funsion
}

int main() {          // inicio del programa
    char opcion;     // inicializamos la funsion de opcion

    do {             // para hacer el blucle
        opcion = menu();

        if (opcion >= '1' && opcion <= '5') {         // seleccion de la funsion
            if (opcion >= '1' && opcion <= '4') {
                printf("Resultado: ");
                switch (opcion) {
                    case '1':
                        printf("%.2f + %.2f = %.2f\n", x, y, x + y);  // impresion en pantalla
                        break;
                    case '2':
                        printf("%.2f - %.2f = %.2f\n", x, y, x - y);
                        break;
                    case '3':
                        printf("%.2f * %.2f = %.2f\n", x, y, x * y);
                        break;
                    case '4':
                        printf("%.2f / %.2f = %.2f\n", x, y, x / y);
                        break;
                }
            } else if (opcion == '5') {
                int resultado = 1;
                for (int i = 2; i <= z; i++) {
                    resultado *= i;
                }
                printf("%d! = %d\n", z, resultado);  // nuestro resultado final
            }
        } else if (opcion == 'c') {
            printf("Opcion no valida\n");
        }
    } while (opcion != '6');

    return 0;
}

