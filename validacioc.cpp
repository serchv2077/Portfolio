#include <stdio.h>  //LIBRERIA

int main(){
int suma = 0;
int y;             // VARIABLES
int num =0;
do                 //CICLO PARA REPETIR
{
    printf("Ingresa el numero que quieres suma: ");
    if (scanf("%d", &y) != 1){                         //SI LA LECTURA ES DIFERENTE DE 1
        printf("Tu dato es incorrecto\n : ");
        while (getchar() != '\n'); // Clear the input buffer
            continue;  // CONTINUAR EL BLUCLE
}
    suma = y+suma;    //VALOR

} while(suma < 100);
    printf("Tu suma es o pasa de 100 %d\n", suma);  // RESULTADO

    return 0;
}




