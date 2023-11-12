#include <stdio.h>

int main(){
    float salario;
    float horas;
    float resultado;
    float extras;

    printf("Cuanto te pagan la hora?: ");
    scanf("%f", &salario);
    printf("Cuantas horas trabajste?: ");
    scanf("%f", &horas);
    extras=horas-40;

    if(horas>40){
            resultado=(40*salario+extras*1.5);
            printf("Tu salario es de %f", resultado);

    }else{
     resultado=horas*salario;
     printf("Tu salario es %f", resultado);
     return 0;

    }
}

