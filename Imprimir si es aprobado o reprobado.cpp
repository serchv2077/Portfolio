#include <stdio.h>

int main(){

int cal;

    printf("Cual es  tu calificacion: ");
    scanf("%d", &cal);

if (cal > 59){
    printf("Estas aprobado\n");
}else{
    printf("Reprobado\n");
}

    return 0;
}
