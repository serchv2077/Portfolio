#include <stdio.h>  // Entrada y salida de datos

int main (){
    int y;     //variable para recibir calificacion

    printf("Cual es tu calificacion: ");
    scanf("%d", &y);

    if(y==100){  // igualamos y a 100
        printf("Exelente: ");
    }else if(y<99 && y>90){  //rango para este if
        printf("Muy bueno: ");
    }else if(y<89 && y>80){
        printf("Bueno: ");
    }else if(y<79 && y>70){
    printf("Regular: ");
    }else if(y<69 && y>60){
        printf("Malo: ");
    }else{                     // si no cumple esto , imprime reprobadpo.
        printf("Reprobado: ");
    }
    return 0;           //darle fin.


}
