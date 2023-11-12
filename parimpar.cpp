#include <stdio.h>

int main(){
int i;
    printf("Que numero quieres saber si es par o impar: ");
    scanf("%d", &i);
    if(i%2==0){
    printf("Tu numero es Par");
    }else{
        printf("Es impar");
    }
}
