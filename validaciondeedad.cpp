#include <stdio.h> // LIBRERIA

int main(){
int edad; // VARIABLE

    printf("Cual es tu edad: ");
    scanf("%d", &edad);

    if(edad >=18 &&  edad <= 40){               // RANGO DE EDAD
        printf("Tu edad se encuentra validada en el rango %d\n", edad);
    } else{                                                // EN CASO DE NO CUMPLIR
    printf("Tu edad no es valida dentro del rango");
    }
}
