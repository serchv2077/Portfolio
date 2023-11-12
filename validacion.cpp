#include <stdio.h>

int num1,num2,res;
int main(){

do{
   printf("Dame un numero entero: ");
   scanf("%d", &num1);
   if(num1==0){
    printf("Tu numero no es valido: ");
    fflush(stdin);
    scanf("%d", &num1);
   }

} while(1);
printf("%d", num1);
return 0;
}
