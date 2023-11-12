#include <stdio.h>   //nos permite ingresar y producir datos.

int main(){
    int lado,radio,base;
    int opcion;
    int circulo,cuadrado,triangulo;
    const double PI = 3.14159265;
    double resultado;

    printf("Seleccione una opcion:\n: ");                       // nos permite imprimir
    printf("1. Calcular area de un circulo\n: ");
    printf("2. Calcular area de un cuadrado\n: ");
    printf("3. Calcular area de un triangulo\n: ");
    scanf("%d", &opcion);                              // leer los datos

    switch(opcion){                           // el swich nos permite hacer el menu de seleccion
    case 1:            // opciones del menu.
    printf("Cual es el radio: ");
    scanf("%d", &radio);
    resultado=PI*radio*radio;
    printf("El area de tu circulo es %lf: ", resultado);
    break;                  // para darle un fin a nuestra seleccion.
    case 2:
        printf("Cual es el lado: ");
    scanf("%d", &lado);
    resultado=lado*lado;
    printf("El area de tu cuadrado  es %lf: ", resultado);
    break;
    case 3:
    printf("Cual es el lado: ");
    scanf("%d", &lado);
     printf("Cual es el base: ");
    scanf("%d", &base);
    resultado =base*lado/2;
    printf("El area de tu triangulo  es %lf: ", resultado);
    break;
    }

}
