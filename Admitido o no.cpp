#include <stdio.h>

int main (){
    float cal1,cal2;
    float resultado;

    printf("Cual es tu resultado de prepa?: ");
    scanf("%f", &cal1);
    printf("Cual es tu resultado del examen?: ");
    scanf("%f", &cal2);
    resultado = (cal1+cal2)/2;
    if(resultado>=85){
            printf("Fuiste aprobado con una calificacion de %f\n: ", resultado);

    }else {
    printf("No fuiste admitido con una calificacion de %f\n: ", resultado);
    }
}
