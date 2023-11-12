#include <stdio.h>

int main(){

    int edad,pulsaciones;
    printf("Cual es tu edad?: ");
    scanf("%d", &edad);

    pulsaciones=220-edad;

    printf("Tus pulsaciones maximas son %d:\n. ", pulsaciones);

}
