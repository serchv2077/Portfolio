#include <stdio.h>  //entrada y salida de datos

int main(){
    float salario;  // nuestras variables para introducirlas con punto decimal.
    float horas;
    float resultado;
    float extras;

    printf("Cuanto te pagan la hora?: ");
    scanf("%f", &salario);
    printf("Cuantas horas trabajste?: ");
    scanf("%f", &horas);
    extras=horas-40;   // darle la caractersitica a las extras.

    if(horas>40){            // darle rango a las horas para realizar nuestra funsio de extras.
            resultado=(40*salario+extras*1.5);  // calcular el salario mas horas extras con un pago de 1.5 mas por hora.
            printf("Tu salario es de %f", resultado);

    }else{                     // si no se cumple el rango
     resultado=horas*salario;     // operacion para calcular salario sin horas extras.
     printf("Tu salario es %f", resultado);
     return 0;

    }
}

