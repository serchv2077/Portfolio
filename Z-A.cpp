#include <stdio.h> //LIBRERIA

int main(){      //INICIO
    char letras; // VARIABLES LOCALES

    for(letras = 'Z'; letras >='A'; letras = letras - 1){  // CICLO FOR CON SUS CARACTERISTICAS.
    printf("%c: \n", letras);  // RESULTADO EN PANTALLA.
    }
    return 0;
}
